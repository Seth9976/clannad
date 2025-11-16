// 函数: sub_6d1910
// 地址: 0x6d1910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
uint32_t ebx = arg4
int32_t* edi = arg3
uint32_t eax_1 = ebx u>> 8
arg4 = eax_1
arg3.b = edi[2].b
int32_t i_16 = *edi

if (arg3.b == 0)
    arg3.b = *(edi + 9)
    
    if (arg3.b == 8)
        char* edx = arg2 + i_16
        char* ecx = &edx[i_16]
        
        if ((arg5 & 0x80) == 0)
            if (i_16 != 0)
                int32_t i_9 = i_16
                int32_t i
                
                do
                    eax_1.b = edx[0xffffffff]
                    edx = &edx[0xffffffff]
                    ecx[0xffffffff] = eax_1.b
                    ecx = &ecx[0xfffffffe]
                    *ecx = ebx.b
                    i = i_9
                    i_9 -= 1
                while (i != 1)
            
            int32_t eax_3 = i_16 * 2
            *(edi + 0xa) = 0x1002
            edi[1] = eax_3
            return eax_3
        
        if (i_16 u> 1)
            int32_t i_8 = i_16 - 1
            int32_t i_1
            
            do
                ecx[0xffffffff] = ebx.b
                edx = &edx[0xffffffff]
                eax_1.b = *edx
                ecx -= 2
                *ecx = eax_1.b
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
        
        ecx[0xffffffff] = ebx.b
        int32_t eax_2 = i_16 * 2
        *(edi + 0xa) = 0x1002
        edi[1] = eax_2
        return eax_2
    
    if (arg3.b == 0x10)
        void* edx_1 = arg2 + (i_16 << 1)
        char* ecx_1 = edx_1 + (i_16 << 1)
        
        if ((arg5 & 0x80) == 0)
            if (i_16 != 0)
                int32_t i_11 = i_16
                int32_t i_2
                
                do
                    char eax_7 = *(edx_1 - 1)
                    edx_1 -= 2
                    ecx_1[0xffffffff] = eax_7
                    ecx_1 = &ecx_1[0xfffffffc]
                    ecx_1[2] = *edx_1
                    ecx_1[1] = ebx.b
                    *ecx_1 = arg4.b
                    i_2 = i_11
                    i_11 -= 1
                while (i_2 != 1)
            
            int32_t eax_10 = i_16 << 2
            *(edi + 0xa) = 0x2002
            edi[1] = eax_10
            return eax_10
        
        if (i_16 u> 1)
            int32_t i_10 = i_16 - 1
            int32_t i_3
            
            do
                ecx_1[0xffffffff] = ebx.b
                edx_1 -= 2
                ecx_1[0xfffffffe] = eax_1.b
                ecx_1[0xfffffffd] = *(edx_1 + 1)
                ecx_1 -= 4
                *ecx_1 = *edx_1
                eax_1 = arg4
                i_3 = i_10
                i_10 -= 1
            while (i_3 != 1)
        
        ecx_1[0xffffffff] = ebx.b
        ecx_1[0xfffffffe] = eax_1.b
        int32_t eax_6 = i_16 << 2
        *(edi + 0xa) = 0x2002
        edi[1] = eax_6
        return eax_6
else if (arg3.b == 2)
    eax_1.b = *(edi + 9)
    
    if (eax_1.b == 8)
        void* edx_3 = i_16 * 3 + arg2
        void* ecx_2 = edx_3 + i_16
        
        if ((arg5 & 0x80) == 0)
            if (i_16 != 0)
                int32_t i_13 = i_16
                int32_t i_4
                
                do
                    char eax_15 = *(edx_3 - 1)
                    edx_3 -= 3
                    *(ecx_2 - 1) = eax_15
                    ecx_2 -= 4
                    *(ecx_2 + 2) = *(edx_3 + 1)
                    *(ecx_2 + 1) = *edx_3
                    *ecx_2 = ebx.b
                    i_4 = i_13
                    i_13 -= 1
                while (i_4 != 1)
            
            int32_t eax_18 = i_16 << 2
            *(edi + 0xa) = 0x2004
            edi[1] = eax_18
            return eax_18
        
        if (i_16 u> 1)
            int32_t i_12 = i_16 - 1
            int32_t i_5
            
            do
                *(ecx_2 - 1) = ebx.b
                edx_3 -= 3
                *(ecx_2 - 2) = *(edx_3 + 2)
                *(ecx_2 - 3) = *(edx_3 + 1)
                ecx_2 -= 4
                *ecx_2 = *edx_3
                i_5 = i_12
                i_12 -= 1
            while (i_5 != 1)
        
        *(ecx_2 - 1) = ebx.b
        int32_t eax_14 = i_16 << 2
        *(edi + 0xa) = 0x2004
        edi[1] = eax_14
        return eax_14
    
    if (eax_1.b == 0x10)
        void* edx_4 = arg2 + i_16 * 6
        void* ecx_3 = edx_4 + (i_16 << 1)
        
        if ((arg5 & 0x80) != 0)
            if (i_16 u> 1)
                int32_t i_14 = i_16 - 1
                int32_t i_6
                
                do
                    edx_4 -= 6
                    *(ecx_3 - 1) = ebx.b
                    *(ecx_3 - 2) = arg4.b
                    *(ecx_3 - 3) = *(edx_4 + 5)
                    *(ecx_3 - 4) = *(edx_4 + 4)
                    *(ecx_3 - 5) = *(edx_4 + 3)
                    *(ecx_3 - 6) = *(edx_4 + 2)
                    *(ecx_3 - 7) = *(edx_4 + 1)
                    ecx_3 -= 8
                    *ecx_3 = *edx_4
                    i_6 = i_14
                    i_14 -= 1
                while (i_6 != 1)
            
            *(ecx_3 - 1) = ebx.b
            *(ecx_3 - 2) = arg4.b
        else if (i_16 != 0)
            int32_t i_15 = i_16
            int32_t i_7
            
            do
                char eax_28 = *(edx_4 - 1)
                edx_4 -= 6
                *(ecx_3 - 1) = eax_28
                ecx_3 -= 8
                *(ecx_3 + 6) = *(edx_4 + 4)
                *(ecx_3 + 5) = *(edx_4 + 3)
                *(ecx_3 + 4) = *(edx_4 + 2)
                *(ecx_3 + 3) = *(edx_4 + 1)
                *(ecx_3 + 2) = *edx_4
                *(ecx_3 + 1) = ebx.b
                *ecx_3 = arg4.b
                i_7 = i_15
                i_15 -= 1
            while (i_7 != 1)
        
        eax_1 = i_16 << 3
        *(edi + 0xa) = 0x4004
        edi[1] = eax_1

return eax_1
