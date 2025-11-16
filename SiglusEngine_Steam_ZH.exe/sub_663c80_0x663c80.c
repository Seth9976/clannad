// 函数: sub_663c80
// 地址: 0x663c80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = nullptr
void* var_c
int32_t result = (*(*arg3 + 0xc))(arg3, &var_c)

if (result s< 0)
    return result

void* ecx = var_c
int32_t i = 0

if (0 u< *(ecx + 0x2c))
    do
        result = (*(*arg3 + 0x14))(arg3, i, &var_8)
        
        if (result s< 0)
            return result
        
        int32_t* ecx_1 = var_8
        
        if (*ecx_1 == arg2)
            ecx = var_c
            break
        
        (*(*arg3 + 0x50))(arg3, ecx_1)
        ecx = var_c
        i += 1
        var_8 = nullptr
    while (i s< zx.d(*(ecx + 0x2c)))

(*(*arg3 + 0x4c))(arg3, ecx)
int32_t* edx = var_8

if (edx != 0)
    int16_t eax_5 = edx[6].w
    
    if (eax_5 s<= 8)
        int32_t i_2 = 0
        
        if (0 s< eax_5)
            int32_t ebx_1 = 0
            int16_t* esi_2 = &arg4[2]
            int32_t i_1
            
            do
                uint32_t eax_8 = zx.d(*(edx[2] + ebx_1 + 4))
                *esi_2 = eax_8.w
                
                if (eax_8 == 0x1a)
                    *esi_2 = 0x4000 | *(*(edx[2] + ebx_1) + 4)
                
                if (*esi_2 == 0x1b)
                    *esi_2 = 0x2000 | *(*(edx[2] + ebx_1) + 4)
                
                if (*esi_2 == 0x1d)
                    int16_t eax_13 = sub_663b50(arg3, *(edx[2] + ebx_1))
                    edx = var_8
                    *esi_2 = eax_13
                
                esi_2 = &esi_2[1]
                i_1 = i_2 + 1
                ebx_1 += 0x10
                i_2 = i_1
            while (i_1 s< sx.d(edx[6].w))
        
        uint32_t ecx_6 = zx.d(edx[9].w)
        
        if (ecx_6 - 0x16 u<= 3)
            switch (ecx_6)
                case 0x16
                    ecx_6 = 3
                case 0x17
                    ecx_6 = 0x13
                case 0x18
                    ecx_6 = 0
                case 0x19
                    ecx_6 = 0xa
        
        arg4[1].w = ecx_6.w
        *arg4 = edx[5]
        int32_t eax_16
        eax_16.w = edx[6].w
        *(arg4 + 6) = eax_16.w
        (*(*arg3 + 0x50))(arg3, edx)
        return 0

return 0x80004005
