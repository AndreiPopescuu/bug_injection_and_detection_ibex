"""Minimal Gemma smoke test."""
import os
import time

from dotenv import load_dotenv
from google import genai

load_dotenv(".env")

MODEL = os.environ.get("GEMINI_MODEL", "gemma-4-31b-it")

client = genai.Client(api_key=os.environ["GEMINI_API_KEY"])

print(f"Calling {MODEL} ...")
t = time.time()
r = client.models.generate_content(model=MODEL, contents="Say hello in one word.")
print(f"{time.time() - t:.1f}s: {r.text!r}")
