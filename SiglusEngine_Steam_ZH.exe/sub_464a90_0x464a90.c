// 函数: sub_464a90
// 地址: 0x464a90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_15 = arg1[9]

if (eax_15 == 1)
    arg1[0xa] = 1
    arg1[0xb] = 1
else if (eax_15 == 3)
    if (arg1[0x47] != 0)
        arg1[0xa] = 3
        arg1[0xb] = 2
    else
        int32_t var_8_1
        void* eax_13
        
        if (arg1[0x4a] == 0)
            int32_t* eax_14 = arg1[0x37]
            int32_t ecx_3 = *eax_14
            int32_t edx_1 = eax_14[0x15]
            int32_t edi_1 = eax_14[0x2a]
            
            if (ecx_3 != 1)
                if (ecx_3 != 0x52 || edx_1 != 0x47 || edi_1 != 0x42)
                label_464b7e:
                    eax_13 = *arg1
                    *(eax_13 + 0x18) = ecx_3
                    *(eax_13 + 0x1c) = edx_1
                    *(eax_13 + 0x20) = edi_1
                    *(eax_13 + 0x14) = 0x6f
                    var_8_1 = 1
                    goto label_464b93
                
                arg1[0xa] = 2
                arg1[0xb] = 2
            else
                if (edx_1 != 2 || edi_1 != 3)
                    goto label_464b7e
                
                arg1[0xa] = edi_1
                arg1[0xb] = edx_1
        else
            uint32_t ecx_2 = zx.d(arg1[0x4b].b)
            
            if (ecx_2 == 0)
                arg1[0xa] = 2
                arg1[0xb] = 2
            else if (ecx_2 == 1)
                arg1[0xa] = 3
                arg1[0xb] = 2
            else
                eax_13 = *arg1
                *(eax_13 + 0x14) = 0x72
                *(eax_13 + 0x18) = ecx_2
                var_8_1 = 0xffffffff
            label_464b93:
                (*(eax_13 + 4))(arg1, var_8_1)
                arg1[0xa] = 3
                arg1[0xb] = 2
else if (eax_15 == 4)
    uint32_t ecx_1
    
    if (arg1[0x4a] != 0)
        ecx_1 = zx.d(arg1[0x4b].b)
    
    if (arg1[0x4a] == 0 || ecx_1 == 0)
        arg1[0xa] = 4
        arg1[0xb] = 4
    else
        if (ecx_1 != 2)
            void* eax_7 = *arg1
            *(eax_7 + 0x14) = 0x72
            *(eax_7 + 0x18) = ecx_1
            (*(eax_7 + 4))(arg1, 0xffffffff)
        
        arg1[0xa] = 5
        arg1[0xb] = 4
else
    arg1[0xa] = 0
    arg1[0xb] = 0

*(arg1 + 0x38) = fconvert.d(fconvert.t(1.0))
arg1[0xc] = 1
arg1[0xd] = 1
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = 1
arg1[0x14] = 1
arg1[0x15] = 0
arg1[0x16] = 2
arg1[0x17] = 0
arg1[0x18] = 0x100
arg1[0x22] = 0
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
return 0
