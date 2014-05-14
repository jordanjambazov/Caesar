import sys

offset = int(sys.argv[1])

while True:
    c = sys.stdin.read(1)
    if not c:
        break
    sys.stdout.write(chr(ord(c) + offset))
