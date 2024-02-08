# Plog as a Submodule

## Installing

1. Navigate to the project's include subdirectory
2. ```git submodule add git@github.com:rbeesley/plog.git plog```
3. ```cd plog```
4. ```git submodule update --init --recursive```

## Pulling down upstream changes

1. Navigate to the plog subdirectory
2. ```git submodule update --recursive```

-or-

1. From the root git project
2. ```git pull --recurse-submodules```

### Notes
Created following the article "How to Turn a Turn a Directory in a Git Repository Into a Submodule":
https://www.howtogeek.com/devops/how-to-turn-a-turn-a-directory-in-a-git-repository-into-a-submodule/
