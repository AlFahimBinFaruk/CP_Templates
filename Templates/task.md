## For cpp
```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "compile",
            "type": "shell",
            "command": "g++",
            "args": [
                "-std=c++17",
                "-o",
                "${fileBasenameNoExtension}",
                "${file}"
            ],
            "group": {
                "kind": "build",
                "isDefault": false
            }
        },
        {
            "label": "compile and run",
            "type": "shell",
            "command": "g++ -std=c++17 -o ${fileBasenameNoExtension} ${file} && ./${fileBasenameNoExtension} < input.txt > output.txt",
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
```

## For Python
```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Run Python file",
            "type": "shell",
            "command": "python3",  // Or "python" depending on your OS
            "args": [
                "${file}"  // This will run the current file open in the editor
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": [],
            "detail": "Runs the currently opened Python file"
        }
    ]
}
```
