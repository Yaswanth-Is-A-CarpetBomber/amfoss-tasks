file = File.open("/Users/a.t.yaswanthreddy/VS Code/Club/Task 1 Sub Task 2/Ruby/input.txt", "r+")

output = File.open("/Users/a.t.yaswanthreddy/VS Code/Club/Task 1 Sub Task 2/Ruby/output.txt", "r+")
output.puts(file.read)
    
file.close()
output.close()
