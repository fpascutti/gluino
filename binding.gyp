{
    "targets": [
        {
            "target_name": "<(module_name)",
            "sources": [
                "./src/index.cpp"
            ]
        },
        {
            "target_name": "post_build",
            "type": "none",
            "dependencies": [
                "<(module_name)"
            ],
            "copies": [
                {
                    "files": [
                        "<(PRODUCT_DIR)/<(module_name).node"
                    ],
                    "destination": "<(module_path)"
                }
            ]
        }
    ]
}
