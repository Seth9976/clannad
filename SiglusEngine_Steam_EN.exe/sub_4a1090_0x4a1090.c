// 函数: sub_4a1090
// 地址: 0x4a1090
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL var_4 = arg1
BOOL esi = arg1

if (esi s< 0)
    esi = 0
else if (esi s> 0xff)
    esi = 0xff

BOOL eax_5

if (arg2 != 0)
    WaitForSingleObject(data_1bfffc4, 0xffffffff)
    
    if (data_641b5c != 0 && data_208cd58 != 0 && data_208cd54 != 0)
        BOOL ecx_2
        
        if (esi s>= 0)
            ecx_2 = esi
            
            if (esi s> 0xff)
                ecx_2 = 0xff
        else
            ecx_2 = 0
        
        int32_t edx = arg2
        data_208ce1c = data_1392ccc
        int32_t eax_8 = data_208cda0
        data_208ce10 = eax_8
        data_208ce04 = ecx_2
        data_208ce08 = eax_8
        data_208ce28 = 2
        
        if (arg2 s< 0)
            edx = neg.d(edx)
        
        data_208ce24 = edx
        data_208ce20 = 0
        data_208ce14 = ecx_2
        data_208ce18 = 0
        data_208ce0c = 0
        data_208cd84 = 1
    
    ReleaseSemaphore(data_1bfffc4, 1, nullptr)
    WaitForSingleObject(data_1bfffc4, 0xffffffff)
    
    if (data_641b5c != 0 && data_208ced8 != 0 && data_208ced4 != 0)
        BOOL ecx_3
        
        if (esi s>= 0)
            ecx_3 = esi
            
            if (esi s> 0xff)
                ecx_3 = 0xff
        else
            ecx_3 = 0
        
        int32_t edx_1 = arg2
        data_208cf9c = data_1392ccc
        int32_t eax_10 = data_208cf20
        data_208cf90 = eax_10
        data_208cf84 = ecx_3
        data_208cf88 = eax_10
        data_208cfa8 = 2
        
        if (arg2 s< 0)
            edx_1 = neg.d(edx_1)
        
        data_208cfa4 = edx_1
        data_208cfa0 = 0
        data_208cf94 = ecx_3
        data_208cf98 = 0
        data_208cf8c = 0
        data_208cf04 = 1
    
    ReleaseSemaphore(data_1bfffc4, 1, nullptr)
    WaitForSingleObject(data_1bfffc4, 0xffffffff)
    BOOL ecx_4
    
    if (esi s>= 0)
        ecx_4 = esi
        
        if (esi s> 0xff)
            ecx_4 = 0xff
    else
        ecx_4 = 0
    
    int32_t edx_2 = arg2
    data_20af90c = data_1392ccc
    int32_t eax_12 = data_20af890
    data_20af900 = eax_12
    data_20af8f4 = ecx_4
    data_20af8f8 = eax_12
    data_20af918 = 2
    
    if (arg2 s< 0)
        edx_2 = neg.d(edx_2)
    
    HANDLE hSemaphore = data_1bfffc4
    data_20af914 = edx_2
    data_20af910 = 0
    data_20af904 = ecx_4
    data_20af908 = 0
    data_20af8fc = 0
    data_20af874 = 1
    ReleaseSemaphore(hSemaphore, 1, nullptr)
    WaitForSingleObject(data_1bfffc4, 0xffffffff)
    BOOL ecx_5
    
    if (esi s>= 0)
        ecx_5 = esi
        
        if (esi s> 0xff)
            ecx_5 = 0xff
    else
        ecx_5 = 0
    
    int32_t edx_3 = arg2
    data_20afccc = data_1392ccc
    int32_t eax_14 = data_20afc50
    data_20afcc0 = eax_14
    data_20afcb4 = ecx_5
    data_20afcb8 = eax_14
    data_20afcd8 = 2
    
    if (arg2 s< 0)
        edx_3 = neg.d(edx_3)
    
    HANDLE hSemaphore_1 = data_1bfffc4
    data_20afcd4 = edx_3
    data_20afcd0 = 0
    data_20afcc4 = ecx_5
    data_20afcc8 = 0
    data_20afcbc = 0
    data_20afc34 = 1
    ReleaseSemaphore(hSemaphore_1, 1, nullptr)
    sub_4c0650(WaitForSingleObject(data_1bfffc4, 0xffffffff), 0xffffffff, 2, esi, arg2)
    eax_5 = ReleaseSemaphore(data_1bfffc4, 1, nullptr)
else
    if (data_641b5c != arg2)
        WaitForSingleObject(data_641b54, 0xffffffff)
        
        if (esi s>= 0)
            BOOL eax_1 = esi
            
            if (esi s> 0xff)
                eax_1 = 0xff
            
            data_208cda0 = eax_1
        else
            data_208cda0 = 0
        
        if (data_208cd58 != 0 && data_208cd54 != 0)
            sub_4c33a0(0)
        
        ReleaseSemaphore(data_641b54, 1, nullptr)
        
        if (data_641b5c != 0)
            WaitForSingleObject(data_641b54, 0xffffffff)
            
            if (esi s>= 0)
                BOOL eax_2 = esi
                
                if (esi s> 0xff)
                    eax_2 = 0xff
                
                data_208cf20 = eax_2
            else
                data_208cf20 = 0
            
            if (data_208ced8 != 0 && data_208ced4 != 0)
                sub_4c33a0(1)
            
            ReleaseSemaphore(data_641b54, 1, nullptr)
    
    WaitForSingleObject(data_702788, 0xffffffff)
    
    if (esi s>= 0)
        BOOL eax_3 = esi
        
        if (esi s> 0xff)
            eax_3 = 0xff
        
        data_20af890 = eax_3
    else
        data_20af890 = 0
    
    sub_4cbc80(0)
    ReleaseSemaphore(data_702788, 1, nullptr)
    WaitForSingleObject(data_702788, 0xffffffff)
    
    if (esi s>= 0)
        BOOL eax_4 = esi
        
        if (esi s> 0xff)
            eax_4 = 0xff
        
        data_20afc50 = eax_4
    else
        data_20afc50 = 0
    
    sub_4cbc80(1)
    eax_5 = ReleaseSemaphore(data_702788, 1, nullptr)
    
    if (esi s>= 0)
        eax_5 = esi
        
        if (esi s> 0xff)
            eax_5 = 0xff
        
        data_208c718 = eax_5
    else
        data_208c718 = 0
    
    if (data_208c70c != 0 && data_1bfe268 != 0xffffffff)
        int32_t eax_6 = sub_4c0620()
        data_1af1718 = esi
        return eax_6

data_1af1718 = esi
return eax_5
