// 函数: sub_54b730
// 地址: 0x54b730
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t esi = arg2

if (esi s< 0)
    esi = 0
else if (esi s> 0xff)
    esi = 0xff

switch (arg1)
    case 0
        if (esi s>= 0)
            int32_t eax_1 = esi
            
            if (esi s> 0xff)
                eax_1 = 0xff
            
            data_208c728 = eax_1
        else
            data_208c728 = 0
        
        if (data_208c70c != 0 && data_1bfe268 != 0xffffffff)
            sub_4c0620()
        
        if (data_641b5c != 0)
            WaitForSingleObject(data_641b54, 0xffffffff)
            
            if (esi s>= 0)
                int32_t eax_2 = esi
                
                if (esi s> 0xff)
                    eax_2 = 0xff
                
                data_208cdb0 = eax_2
            else
                data_208cdb0 = 0
            
            if (data_208cd58 != 0 && data_208cd54 != 0)
                sub_4c33a0(0)
            
            ReleaseSemaphore(data_641b54, 1, nullptr)
            
            if (data_641b5c != 0)
                WaitForSingleObject(data_641b54, 0xffffffff)
                
                if (esi s>= 0)
                    int32_t eax_3 = esi
                    
                    if (esi s> 0xff)
                        eax_3 = 0xff
                    
                    data_208cf30 = eax_3
                else
                    data_208cf30 = 0
                
                if (data_208ced8 != 0 && data_208ced4 != 0)
                    sub_4c33a0(1)
                
                ReleaseSemaphore(data_641b54, 1, nullptr)
        
        arg2.b = 0
        sub_54b690(esi, arg2.b)
    case 1
        if (data_641b5c != 0)
            WaitForSingleObject(data_641b54, 0xffffffff)
            
            if (esi s>= 0)
                int32_t eax_5 = esi
                
                if (esi s> 0xff)
                    eax_5 = 0xff
                
                data_208d0b0 = eax_5
            else
                data_208d0b0 = 0
            
            if (data_208d058 != 0 && data_208d054 != 0)
                sub_4c33a0(2)
            
            ReleaseSemaphore(data_641b54, 1, nullptr)
            
            if (data_641b5c != 0)
                WaitForSingleObject(data_641b54, 0xffffffff)
                
                if (esi s>= 0)
                    int32_t eax_6 = esi
                    
                    if (esi s> 0xff)
                        eax_6 = 0xff
                    
                    data_208d230 = eax_6
                else
                    data_208d230 = 0
                
                if (data_208d1d8 != 0 && data_208d1d4 != 0)
                    sub_4c33a0(3)
                
                ReleaseSemaphore(data_641b54, 1, nullptr)
        
        arg2.b = 1
        sub_54b690(esi, arg2.b)
    case 2
        int32_t i_2 = 8
        int32_t ebx_1 = 0x30
        void* edi_1 = &data_20915b0
        int32_t i_4 = 8
        int32_t i
        
        do
            if (data_641b5c != 0 && ebx_1 u<= 0x3f)
                WaitForSingleObject(data_641b54, 0xffffffff)
                
                if (esi s>= 0)
                    int32_t eax_8 = esi
                    
                    if (esi s> 0xff)
                        eax_8 = 0xff
                    
                    *edi_1 = eax_8
                else
                    *edi_1 = 0
                
                if (*(edi_1 - 0x58) != 0 && *(edi_1 - 0x5c) != 0)
                    sub_4c33a0(ebx_1)
                
                ReleaseSemaphore(data_641b54, 1, nullptr)
                i_2 = i_4
            
            ebx_1 += 1
            edi_1 += 0x180
            i = i_2
            i_2 -= 1
            i_4 = i_2
        while (i != 1)
        arg2.b = 2
        sub_54b690(esi, arg2.b)
    case 3
        int32_t i_3 = 0x10
        int32_t ebx_2 = 4
        void* edi_2 = &data_208d3b0
        int32_t i_5 = 0x10
        int32_t i_1
        
        do
            if (data_641b5c != 0 && ebx_2 u<= 0x3f)
                WaitForSingleObject(data_641b54, 0xffffffff)
                
                if (esi s>= 0)
                    int32_t eax_10 = esi
                    
                    if (esi s> 0xff)
                        eax_10 = 0xff
                    
                    *edi_2 = eax_10
                else
                    *edi_2 = 0
                
                if (*(edi_2 - 0x58) != 0 && *(edi_2 - 0x5c) != 0)
                    sub_4c33a0(ebx_2)
                
                ReleaseSemaphore(data_641b54, 1, nullptr)
                i_3 = i_5
            
            ebx_2 += 1
            edi_2 += 0x180
            i_1 = i_3
            i_3 -= 1
            i_5 = i_3
        while (i_1 != 1)
        arg2.b = 3
        sub_54b690(esi, arg2.b)
