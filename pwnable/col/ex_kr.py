hex_string = "0x21DD09EC"[2:]
bytes_object = bytes.fromhex(hex_string)
ascii_string = bytes_object.decode("ASCII")
print (ascii_string)
