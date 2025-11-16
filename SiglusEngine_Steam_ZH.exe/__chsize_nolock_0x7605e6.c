// 函数: __chsize_nolock
// 地址: 0x7605e6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
BOOL var_c = 0
int32_t eax
int32_t eax_1
int32_t ecx
int32_t edx
int32_t edx_1
eax_1, edx_1 = __lseeki64_nolock(eax, edx, ecx, arg1, 0, 0, FILE_CURRENT)
int32_t eax_2 = eax_1 & edx_1

if (eax_2 != 0xffffffff)
    int32_t eax_3
    BOOL edx_2
    eax_3, edx_2 = __lseeki64_nolock(eax_2, edx_1, edx_1, arg1, 0, 0, FILE_END)
    int32_t ecx_2 = eax_3
    
    if ((eax_3 & edx_2) != 0xffffffff)
        uint32_t esi_2 = arg2 - ecx_2
        bool c_1 = arg2 u< ecx_2
        BOOL eax_6 = sbb.d(arg3, edx_2, c_1)
        bool s_1 = sbb.d(arg3, edx_2, c_1) s< 0
        bool o_1 = unimplemented  {sbb eax, edx}
        BOOL var_8_1 = eax_6
        
        if (not(s_1) && ((sbb.d(arg3, edx_2, c_1) != 0 && s_1 == o_1) || esi_2 != 0))
            char* lpMem = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, 0x1000)
            
            if (lpMem != 0)
                int32_t eax_11 = __setmode_nolock(arg1, 0x8000)
                BOOL eax_12 = var_8_1
                
                while (true)
                    uint32_t eax_13
                    
                    if (eax_12 s< 0 || (eax_12 s<= 0 && esi_2 u< 0x1000))
                        eax_13 = esi_2
                    else
                        eax_13 = 0x1000
                    
                    void* eax_14 = sub_7594f0(esi_2, arg1, lpMem, eax_13)
                    
                    if (eax_14 == 0xffffffff)
                        if (*___doserrno() == 5)
                            *__errno() = 0xd
                        
                        ebx = 0xffffffff
                        var_c = 0xffffffff
                        break
                    
                    int32_t eax_15
                    int32_t edx_3
                    edx_3:eax_15 = sx.q(eax_14)
                    uint32_t temp5_1 = esi_2
                    esi_2 -= eax_15
                    bool c_2 = temp5_1 u< eax_15
                    eax_12 = sbb.d(var_8_1, edx_3, c_2)
                    bool z_2 = sbb.d(var_8_1, edx_3, c_2) == 0
                    bool s_2 = sbb.d(var_8_1, edx_3, c_2) s< 0
                    bool o_2 = unimplemented  {sbb eax, edx}
                    var_8_1 = eax_12
                    
                    if (s_2)
                        break
                    
                    if (z_2 || s_2 != o_2)
                        if (esi_2 == 0)
                            break
                
                __setmode_nolock(arg1, eax_11)
                eax_6, ecx_2, edx_2 = HeapFree(GetProcessHeap(), HEAP_NONE, lpMem)
                goto label_760770
            
            *__errno() = 0xc
        else if (eax_6 s> 0 || (eax_6 s>= 0 && esi_2 u>= 0))
        label_760782:
            int32_t eax_31
            int32_t edx_5
            eax_31, edx_5 = __lseeki64_nolock(eax_6, edx_2, ecx_2, arg1, eax_1, edx_1, FILE_BEGIN)
            
            if ((eax_31 & edx_5) != 0xffffffff)
                return 0
        else
            int32_t eax_20
            int32_t edx_4
            eax_20, edx_4 = __lseeki64_nolock(eax_6, edx_2, ecx_2, arg1, arg2, arg3, FILE_BEGIN)
            
            if ((eax_20 & edx_4) != 0xffffffff)
                BOOL eax_23 = SetEndOfFile(sub_75ea0d(arg1))
                int32_t eax_24 = neg.d(eax_23)
                int32_t eax_28
                edx_2:eax_28 = sx.q(neg.d(sbb.d(eax_24, eax_24, eax_23 != 0)) - 1)
                ebx = eax_28
                eax_6 = edx_2
                var_c = eax_6
                ecx_2 = ebx & eax_6
                
                if (ecx_2 != 0xffffffff)
                    goto label_760782
                
                *__errno() = 0xd
                BOOL* eax_30 = ___doserrno()
                eax_6, ecx_2, edx_2 = GetLastError()
                *eax_30 = eax_6
            label_760770:
                
                if ((ebx & var_c) != 0xffffffff)
                    goto label_760782

return *__errno()
