// 函数: sub_4dea40
// 地址: 0x4dea40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || data_7027b8 == 0)
    int32_t* ecx_1 = data_1cd4514
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0x24))(ecx_1)
        ecx_1 = data_1cd4514
    
    int32_t* edx_1 = data_1cd4518
    
    if (edx_1 != 0)
        data_1cd4518 = 0
        (*(*edx_1 + 8))(edx_1)
        int32_t* eax_4 = data_1cd4518
        
        if (eax_4 != 0)
            data_1cd4518 = 0
            (*(*eax_4 + 8))(eax_4)
        
        ecx_1 = data_1cd4514
    
    if (ecx_1 != 0)
        data_1cd4514 = 0
        (*(*ecx_1 + 8))(ecx_1)
        int32_t* eax_6 = data_1cd4514
        
        if (eax_6 != 0)
            data_1cd4514 = 0
            (*(*eax_6 + 8))(eax_6)
    
    int32_t* eax_7 = data_1cd450c
    
    if (eax_7 != 0)
        (*(*eax_7 + 0x1c))(eax_7)
        int32_t* ecx_5 = data_1cd450c
        
        if (ecx_5 != 0)
            data_1cd450c = 0
            (*(*ecx_5 + 8))(ecx_5)
            int32_t* eax_9 = data_1cd450c
            
            if (eax_9 != 0)
                data_1cd450c = 0
                (*(*eax_9 + 8))(eax_9)
    
    int32_t* eax_10 = data_1cd4508
    
    if (eax_10 != 0)
        (*(*eax_10 + 0x1c))(eax_10)
        int32_t* ecx_8 = data_1cd4508
        
        if (ecx_8 != 0)
            data_1cd4508 = 0
            (*(*ecx_8 + 8))(ecx_8)
            int32_t* eax_12 = data_1cd4508
            
            if (eax_12 != 0)
                data_1cd4508 = 0
                (*(*eax_12 + 8))(eax_12)
    
    int32_t* ecx_10 = data_1cd4510
    
    if (ecx_10 != 0)
        data_1cd4510 = 0
        (*(*ecx_10 + 8))(ecx_10)
        int32_t* eax_14 = data_1cd4510
        
        if (eax_14 != 0)
            data_1cd4510 = 0
            (*(*eax_14 + 8))(eax_14)
    
    BOOL hWnd = data_1cd4504
    
    if (hWnd != 0)
        DestroyWindow(hWnd)
        data_1cd4504 = 0
    
    data_7027ac = 0
    data_63ec80 = 0xffffffff
    data_63ec7c = 0xffffffff
    data_63ec78 = 0xffffffff
    data_63eaf4 = 0xffffffff
    data_7027b0 = 0
else if (data_1cd450c != 0)
    int32_t* eax = data_1cd4514
    (*(*eax + 0x24))(eax)
    ShowWindow(data_1cd4504, SW_HIDE)
    data_7027b0 = 0
