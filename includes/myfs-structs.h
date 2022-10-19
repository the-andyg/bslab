//
//  myfs-structs.h
//  myfs
//
//  Created by Oliver Waldhorst on 07.09.17.
//  Copyright © 2017 Oliver Waldhorst. All rights reserved.
//

#ifndef myfs_structs_h
#define myfs_structs_h

#define NAME_LENGTH 255
#define BLOCK_SIZE 512
#define NUM_DIR_ENTRIES 64
#define NUM_OPEN_FILES 64
#define BASIC_FILE_SIZE 1024;

// TODO: Add structures of your file system here
struct MyFsFileInfo {
    char name[NAME_LENGTH];
    size_t size;
    char* data;
    char* ownerID;
    char* groupID;
    mode_t permissions;
    int links;
};

#endif /* myfs_structs_h */
