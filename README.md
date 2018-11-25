# This is an example project that uses SFML on Visual Studio

## FOLLOW THESE INSTRUCTIONS TO MAKE THIS WORK ON YOUR COPY OF VISUAL STUDIO
1. GO TO YOUR PROJECT'S PROPERTIES
2. FIND ADDITIONAL INCLUDE DIRECTORIES AND ADD THE FOLLOWING:  
`$(SolutionDir)/External Libraries/sfml/include`
3. FIND ADDITIONAL LIBRARY DIRECTORIES AND ADD THE FOLLOWING:  
`$(SolutionDir)/External Libraries/sfml/lib`
4. FIND ADDITIONAL DEPENDENCIES AND ADD THE FOLLOWING:
```
sfml-main-d.lib
sfml-graphics-d.lib
sfml-window-d.lib
sfml-system-d.lib
sfml-audio-d.lib
sfml-network-d.lib
```

# Feel free to redistribute this as needed. Have a nice day.
