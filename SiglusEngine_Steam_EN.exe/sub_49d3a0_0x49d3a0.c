// 函数: sub_49d3a0
// 地址: 0x49d3a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3

if (arg2 != 0 && arg2 != 1)
    if (arg2 - 4 u<= 0xf)
        int32_t eax_1 = 4
        int32_t i_1 = 0x10
        int32_t var_c = 4
        void* esi_1 = &data_208d3b0
        int32_t i_2 = 0x10
        int32_t i
        
        do
            if (arg3 != 0)
                int32_t edi_1 = *(arg3 + 0x780)
                
                if (data_641b5c != 0 && eax_1 u<= 0x3f)
                    WaitForSingleObject(data_641b54, 0xffffffff)
                    
                    if (edi_1 s>= 0)
                        if (edi_1 s> 0xff)
                            edi_1 = 0xff
                        
                        *(esi_1 - 0xc) = edi_1
                    else
                        *(esi_1 - 0xc) = 0
                    
                    ReleaseSemaphore(data_641b54, 1, nullptr)
                    eax_1 = var_c
                    i_1 = i_2
            
            int32_t edi_2 = data_1313278
            
            if (data_641b5c != 0 && eax_1 u<= 0x3f)
                WaitForSingleObject(data_641b54, 0xffffffff)
                
                if (edi_2 s>= 0)
                    if (edi_2 s> 0xff)
                        edi_2 = 0xff
                    
                    *esi_1 = edi_2
                else
                    *esi_1 = 0
                
                ReleaseSemaphore(data_641b54, 1, nullptr)
                eax_1 = var_c
                i_1 = i_2
            
            arg3 = var_8
            eax_1 += 1
            esi_1 += 0x180
            var_c = eax_1
            i = i_1
            i_1 -= 1
            i_2 = i_1
        while (i != 1)
        return eax_1
    
    if (arg2 != 2 && arg2 != 3)
        if (arg3 != 0)
            sub_4c3320(arg2 - 4, 3, arg2, *(arg3 + 0x780), 0)
        
        BOOL eax_4
        
        if (arg2 - 0x20 u> 0xf)
            eax_4 = data_1313274
        else
            uint32_t eax_3 = zx.d(*(arg2 + 0x12c4184))
            BOOL var_10
            
            if (eax_3 u> 3)
                eax_4 = var_10
            else
                switch (eax_3)
                    case 0
                        eax_4 = data_131326c
                    case 1
                        eax_4 = data_1313270
                    case 2
                        eax_4 = data_1313274
                    case 3
                        eax_4 = data_1313278
        
        return sub_4c3320(eax_4, 6, arg2, eax_4, 0)
    
    enum WAIT_EVENT (__stdcall* const eax_6)(HANDLE hHandle, uint32_t dwMilliseconds) =
        WaitForSingleObject
    
    if (arg3 != 0)
        int32_t esi_2 = *(arg3 + 0x780)
        
        if (data_641b5c != 0)
            WaitForSingleObject(data_641b54, 0xffffffff)
            
            if (esi_2 s>= 0)
                if (esi_2 s> 0xff)
                    esi_2 = 0xff
                
                data_208d0a4 = esi_2
            else
                data_208d0a4 = 0
            
            ReleaseSemaphore(data_641b54, 1, nullptr)
            arg3 = var_8
            eax_6 = WaitForSingleObject
        
        int32_t esi_3 = *(arg3 + 0x780)
        
        if (data_641b5c != 0)
            WaitForSingleObject(data_641b54, 0xffffffff)
            
            if (esi_3 s>= 0)
                if (esi_3 s> 0xff)
                    esi_3 = 0xff
                
                data_208d224 = esi_3
            else
                data_208d224 = 0
            
            eax_6 = ReleaseSemaphore(data_641b54, 1, nullptr)
    
    int32_t esi_4 = data_1313270
    
    if (data_641b5c != 0)
        WaitForSingleObject(data_641b54, 0xffffffff)
        
        if (esi_4 s>= 0)
            if (esi_4 s> 0xff)
                esi_4 = 0xff
            
            data_208d0b0 = esi_4
        else
            data_208d0b0 = 0
        
        eax_6 = ReleaseSemaphore(data_641b54, 1, nullptr)
        int32_t esi_5 = data_1313270
        
        if (data_641b5c != 0)
            WaitForSingleObject(data_641b54, 0xffffffff)
            
            if (esi_5 s>= 0)
                if (esi_5 s> 0xff)
                    esi_5 = 0xff
                
                data_208d230 = esi_5
            else
                data_208d230 = 0
            
            eax_6 = ReleaseSemaphore(data_641b54, 1, nullptr)
            
            if (data_641b5c != 0)
                WaitForSingleObject(data_641b54, 0xffffffff)
                int32_t esi_6 = arg4
                
                if (esi_6 s>= 0)
                    int32_t eax_7 = esi_6
                    
                    if (esi_6 s> 0xff)
                        eax_7 = 0xff
                    
                    data_208d0a8 = eax_7
                else
                    data_208d0a8 = 0
                
                eax_6 = ReleaseSemaphore(data_641b54, 1, nullptr)
                
                if (data_641b5c != 0)
                    WaitForSingleObject(data_641b54, 0xffffffff)
                    
                    if (esi_6 s< 0)
                        HANDLE hSemaphore = data_641b54
                        data_208d228 = 0
                        return ReleaseSemaphore(hSemaphore, 1, nullptr)
                    
                    HANDLE hSemaphore_1 = data_641b54
                    
                    if (esi_6 s> 0xff)
                        esi_6 = 0xff
                    
                    data_208d228 = esi_6
                    return ReleaseSemaphore(hSemaphore_1, 1, nullptr)
    
    return eax_6

if (arg3 != 0)
    int32_t edx = data_641b5c
    int32_t eax_10 = *(arg3 + 0x780)
    
    if (edx != 0)
        WaitForSingleObject(data_641b54, 0xffffffff)
        int32_t eax_11 = eax_10
        
        if (eax_11 s>= 0)
            if (eax_11 s> 0xff)
                eax_11 = 0xff
            
            data_208cda4 = eax_11
        else
            data_208cda4 = 0
        
        ReleaseSemaphore(data_641b54, 1, nullptr)
        edx = data_641b5c
        arg3 = var_8
    
    int32_t eax_12 = *(arg3 + 0x780)
    
    if (edx != 0)
        WaitForSingleObject(data_641b54, 0xffffffff)
        int32_t eax_13 = eax_12
        
        if (eax_13 s>= 0)
            if (eax_13 s> 0xff)
                eax_13 = 0xff
            
            data_208cf24 = eax_13
        else
            data_208cf24 = 0
        
        ReleaseSemaphore(data_641b54, 1, nullptr)
        arg3 = var_8
    
    int32_t eax_14 = *(arg3 + 0x780)
    WaitForSingleObject(data_702788, 0xffffffff)
    int32_t eax_15 = eax_14
    
    if (eax_15 s>= 0)
        if (eax_15 s> 0xff)
            eax_15 = 0xff
        
        data_20af894 = eax_15
    else
        data_20af894 = 0
    
    ReleaseSemaphore(data_702788, 1, nullptr)
    int32_t eax_17 = *(var_8 + 0x780)
    WaitForSingleObject(data_702788, 0xffffffff)
    int32_t eax_18 = eax_17
    
    if (eax_18 s>= 0)
        if (eax_18 s> 0xff)
            eax_18 = 0xff
        
        data_20afc54 = eax_18
    else
        data_20afc54 = 0
    
    ReleaseSemaphore(data_702788, 1, nullptr)

int32_t esi_7 = data_131326c

if (data_641b5c != 0)
    WaitForSingleObject(data_641b54, 0xffffffff)
    
    if (esi_7 s>= 0)
        if (esi_7 s> 0xff)
            esi_7 = 0xff
        
        data_208cdb0 = esi_7
    else
        data_208cdb0 = 0
    
    ReleaseSemaphore(data_641b54, 1, nullptr)
    esi_7 = data_131326c
    
    if (data_641b5c != 0)
        WaitForSingleObject(data_641b54, 0xffffffff)
        
        if (esi_7 s>= 0)
            if (esi_7 s> 0xff)
                esi_7 = 0xff
            
            data_208cf30 = esi_7
        else
            data_208cf30 = 0
        
        ReleaseSemaphore(data_641b54, 1, nullptr)
        esi_7 = data_131326c

WaitForSingleObject(data_702788, 0xffffffff)

if (esi_7 s>= 0)
    if (esi_7 s> 0xff)
        esi_7 = 0xff
    
    data_20af8a0 = esi_7
else
    data_20af8a0 = 0

ReleaseSemaphore(data_702788, 1, nullptr)
int32_t esi_8 = data_131326c
WaitForSingleObject(data_702788, 0xffffffff)

if (esi_8 s>= 0)
    if (esi_8 s> 0xff)
        esi_8 = 0xff
    
    data_20afc60 = esi_8
else
    data_20afc60 = 0

ReleaseSemaphore(data_702788, 1, nullptr)

if (data_12a3ef4 != 1 || data_13132b8 == 0)
    if (data_641b5c != 0)
        WaitForSingleObject(data_641b54, 0xffffffff)
        HANDLE hSemaphore_4 = data_641b54
        data_208cda0 = 0xff
        ReleaseSemaphore(hSemaphore_4, 1, nullptr)
        
        if (data_641b5c != 0)
            WaitForSingleObject(data_641b54, 0xffffffff)
            HANDLE hSemaphore_5 = data_641b54
            data_208cf20 = 0xff
            ReleaseSemaphore(hSemaphore_5, 1, nullptr)
    
    WaitForSingleObject(data_702788, 0xffffffff)
    HANDLE hSemaphore_6 = data_702788
    data_20af890 = 0xff
    ReleaseSemaphore(hSemaphore_6, 1, nullptr)
    WaitForSingleObject(data_702788, 0xffffffff)
    HANDLE hSemaphore_7 = data_702788
    data_20afc50 = 0xff
    return ReleaseSemaphore(hSemaphore_7, 1, nullptr)

int32_t esi_9 = data_1af1718

if (data_641b5c != 0)
    WaitForSingleObject(data_641b54, 0xffffffff)
    
    if (esi_9 s>= 0)
        if (esi_9 s> 0xff)
            esi_9 = 0xff
        
        data_208cda0 = esi_9
    else
        data_208cda0 = 0
    
    ReleaseSemaphore(data_641b54, 1, nullptr)
    esi_9 = data_1af1718
    
    if (data_641b5c != 0)
        WaitForSingleObject(data_641b54, 0xffffffff)
        
        if (esi_9 s>= 0)
            if (esi_9 s> 0xff)
                esi_9 = 0xff
            
            data_208cf20 = esi_9
        else
            data_208cf20 = 0
        
        ReleaseSemaphore(data_641b54, 1, nullptr)
        esi_9 = data_1af1718

WaitForSingleObject(data_702788, 0xffffffff)

if (esi_9 s>= 0)
    if (esi_9 s> 0xff)
        esi_9 = 0xff
    
    data_20af890 = esi_9
else
    data_20af890 = 0

ReleaseSemaphore(data_702788, 1, nullptr)
int32_t esi_10 = data_1af1718
WaitForSingleObject(data_702788, 0xffffffff)

if (esi_10 s< 0)
    HANDLE hSemaphore_2 = data_702788
    data_20afc50 = 0
    return ReleaseSemaphore(hSemaphore_2, 1, nullptr)

HANDLE hSemaphore_3 = data_702788

if (esi_10 s> 0xff)
    esi_10 = 0xff

data_20afc50 = esi_10
return ReleaseSemaphore(hSemaphore_3, 1, nullptr)
