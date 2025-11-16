// 函数: sub_49f350
// 地址: 0x49f350
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_641b34, 0xffffffff)
bool cond:0 = data_1bfe268 == 0xffffffff
data_1bfffc8 = 0

if (not(cond:0))
    sub_4bef40()

BOOL eax = ReleaseSemaphore(data_641b34, 1, nullptr)
BOOL edi = arg6

if (edi == 0xfffffffe)
    eax = sub_49f280(arg3)
    edi = eax

int32_t eax_1

if (edi == 0xffffffff)
    eax_1 = sub_4d1ba0(sub_4d1ba0(eax, 0x24, &data_92b1b0, 0), 0x24, &data_92b1d8, 0)
    data_92b1d4 = 0xffffffff
else
    if (arg3 == 0)
        data_92b1b0 = 0
    else
        sub_4cfdf0(eax, arg3, &data_92b1b0, 0x24)
    
    eax_1 = data_7031ac
    data_92b1d8 = 0
    data_92b1d4 = eax_1
    data_92b3e0 = 6
    data_92b3e4 = 0x1a
    data_92b3e8 = arg2
    data_92b3ec = 0xffffffff
    data_92b3f0 = 0xffffffff
    data_92b3f4 = 0xffffffff
    data_92b420 = 3
    data_92b424 = 0
    data_92b428 = 0
    sub_4d1c30(eax_1, &data_92b1b0, &data_92b430, 0x280)
    
    if (data_1af44e8 == 0)
        char* var_24_1 = arg3
        eax_1 = sub_4c84d0(&data_7027c0, "MPLAY(%s)")
        
        if (data_702fc0 != 0)
            eax_1 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_1 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_1 = 0
                
                if (data_1af174c == 0 && eax_1 != 0)
                    return sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_1, data_72d6ac, data_719b6c, &data_7027c0, 0x61b4f0), 
                            data_72d6ac, data_719b6c, &data_7027c0, 0x61b4f0), 
                        data_72d6ac, data_719b6c, &data_7027c0, 0x61b4f0)
    else if (data_1af44f8 != 0 && data_13132ec != 0)
        int32_t eax_5 = data_92b930
        
        if (eax_5 s>= 0)
            if (eax_5 s> 0xff)
                eax_5 = 0xff
            
            data_208c71c = eax_5
        else
            data_208c71c = 0
        
        int32_t eax_6 = data_131326c
        
        if (eax_6 s>= 0)
            if (eax_6 s> 0xff)
                eax_6 = 0xff
            
            data_208c728 = eax_6
        else
            data_208c728 = 0
        
        int32_t ecx_4
        ecx_4.b = arg2 == 0
        int32_t var_c
        int32_t eax_8
        int32_t ebx_1
        int32_t esi_1
        
        if (arg5 != 0)
            esi_1 = data_92b964
            ebx_1 = data_92b968
            var_c = data_92b96c
            eax_8 = data_92b970
        else
            void* eax_7 = edi * 0x58
            esi_1 = *(eax_7 + 0x12c10a0)
            ebx_1 = *(eax_7 + 0x12c10a4)
            eax_8 = *(eax_7 + 0x12c10ac)
            var_c = *(eax_7 + 0x12c10a8)
        
        int32_t edx_5 = arg4
        int32_t var_14
        
        if (edx_5 s<= 0)
            edx_5 = 0
            var_14 = 0xff
        else
            var_14 = 0
        
        int32_t var_24_2 = ecx_4
        int32_t var_28_1 = var_14
        void* eax_10 = edi * 0x58
        BOOL eax_11 = sub_4bf650(eax_10, esi_1, ecx_4, ebx_1, var_c, eax_8, *(eax_10 + 0x12c10b0), 
            *(eax_10 + 0x12c10b4), *(eax_10 + 0x12c10b8), *(eax_10 + 0x12c10bc), 
            *(eax_10 + 0x12c10c0), *(eax_10 + 0x12c10c4), *(eax_10 + 0x12c10c8), 
            *(eax_10 + 0x12c10cc), ecx_4, edx_5)
        return eax_11

return eax_1
