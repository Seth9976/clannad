// 函数: sub_43304d
// 地址: 0x43304d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* ecx_1 = *arg1
int32_t var_8_1 = 0
int32_t eax_1 = ecx_1[1]
int32_t esi = *ecx_1
int32_t edi
int32_t var_14 = edi
int32_t i_2 = ecx_1[4]

if (arg4 != 0 || i_2 u< 1)
    i_2 = 1

if (eax_1 s< 0)
    var_8_1 = 0x80004005
else if (eax_1 s<= 3)
    int32_t edx_5 = ecx_1[6] * ecx_1[5] * i_2
    
    if (esi == 1)
        int32_t esi_13 = 0
        
        if (edx_5 u> 0)
            do
                int32_t edi_3 = *arg2
                
                if (edi_3 == 0)
                    break
                
                int32_t ebx_3
                ebx_3.b = *(*(edi_3 + 8) + 0x18) != 0
                *(*arg3 + (esi_13 << 2)) = ebx_3
                esi_13 += 1
                *arg2 = *(*arg2 + 0xc)
            while (esi_13 u< edx_5)
        
        *arg3 += edx_5 << 2
        *arg1 += 0x1c
    else if (esi == 2)
        int32_t eax_16 = 0
        
        if (edx_5 u> 0)
            do
                int32_t ecx_5 = *arg2
                
                if (ecx_5 == 0)
                    break
                
                void* ecx_6 = *(ecx_5 + 8)
                *(ecx_6 + 0x10)
                *(*arg3 + (eax_16 << 2)) = *(ecx_6 + 0x18)
                eax_16 += 1
                *arg2 = *(*arg2 + 0xc)
            while (eax_16 u< edx_5)
        
        *arg3 += edx_5 << 2
        *arg1 += 0x1c
    else if (esi != 3)
        var_8_1 = 0x80004005
    else
        int32_t eax_13 = 0
        
        if (edx_5 u> 0)
            do
                int32_t esi_7 = *arg2
                
                if (esi_7 == 0)
                    break
                
                *(*arg3 + (eax_13 << 2)) = fconvert.s(fconvert.t(*(*(esi_7 + 8) + 0x18)))
                eax_13 += 1
                *arg2 = *(*arg2 + 0xc)
            while (eax_13 u< edx_5)
        
        *arg3 += edx_5 << 2
        *arg1 += 0x1c
else if (eax_1 == 4)
    if (esi != 4)
        if (i_2 != 0)
            while (*arg2 != 0)
                **arg3 = 0
                *arg3 += 4
                int32_t i_3 = i_2
                i_2 -= 1
                *arg2 = *(*arg2 + 0xc)
                
                if (i_3 == 1)
                    break
    else if (i_2 != 0)
        int32_t* edx_1 = arg2
        int32_t i
        
        do
            void* esi_2 = *edx_1
            
            if (esi_2 == 0)
                break
            
            **arg3 = *(*(esi_2 + 8) + 0x18)
            *arg3 += 4
            i = i_2
            i_2 -= 1
            *edx_1 = *(*edx_1 + 0xc)
        while (i != 1)
    
    *arg1 += 0x14
else if (eax_1 != 5)
    var_8_1 = 0x80004005
else
    int32_t ebx_1 = ecx_1[5]
    *arg1 = &ecx_1[6]
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            arg4 = 0
            *arg1 = &ecx_1[6]
            
            if (ebx_1 u> 0)
                do
                    int32_t eax_4 = sub_43304d(arg1, arg2, arg3, 0)
                    var_8_1 = eax_4
                    
                    if (eax_4 s< 0)
                        return 
                    
                    arg4 += 1
                while (arg4 u< ebx_1)
            
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
