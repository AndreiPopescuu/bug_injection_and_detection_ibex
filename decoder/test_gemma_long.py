"""Try the actual A1 synth prompt with Gemma, streaming so we see progress."""
import os
import sys
import time
from pathlib import Path

from dotenv import load_dotenv
from google import genai

load_dotenv(".env")

MODEL = os.environ.get("GEMINI_MODEL", "gemma-4-31b-it")
PROMPT_PATH = Path("llm_passes/A1_run1/p1_synthesis_prompt.md")

prompt = PROMPT_PATH.read_text()
print(f"Prompt: {len(prompt)} chars")
print(f"Model : {MODEL}")
print(f"Streaming (so we see live token output)...")
print("-" * 60)

client = genai.Client(api_key=os.environ["GEMINI_API_KEY"])
t = time.time()
chars = 0
for chunk in client.models.generate_content_stream(model=MODEL, contents=prompt):
    s = chunk.text or ""
    sys.stdout.write(s)
    sys.stdout.flush()
    chars += len(s)

print()
print("-" * 60)
print(f"Done in {time.time() - t:.1f}s, {chars} chars output")
