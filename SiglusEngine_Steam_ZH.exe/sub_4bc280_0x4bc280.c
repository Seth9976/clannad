// 函数: sub_4bc280
// 地址: 0x4bc280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t* ebx = arg4
int32_t esi_1 = *ebx & 0xfffff
int32_t edi
int32_t var_18 = edi
int32_t edi_1 = 0
*arg7 = 0
*arg6 = 0
*arg5 = 0

if (esi_1 == 0)
    return 0x80004005

uint32_t eax_5 = divu.dp.d(0:(ebx[1]), esi_1)
uint32_t var_c_1 = eax_5

if (arg9 == 0)
    arg9 = 0
    
    if (eax_5 u> 0)
        arg4 = nullptr
        
        do
            int32_t edx_3 = 0
            
            if (esi_1 u> 0)
                void* eax_8 = ebx[2] + arg4
                
                do
                    if (*(*(*(arg1 + 0x14) + (*eax_8 << 2)) + 0x10) != edx_3)
                        return 1
                    
                    edx_3 += 1
                    eax_8 += 4
                while (edx_3 u< esi_1)
                
                edi_1 = 0
            
            arg9 += 1
            arg4 = &arg4[esi_1]
            eax_5 = var_c_1
        while (arg9 u< eax_5)

arg9 = 0
arg4 = nullptr

if (eax_5 u<= 0)
    return 0

while (true)
    int32_t* eax_13 = sub_4bc188(arg1, arg2, arg3, ebx[2] + (edi_1 << 2), esi_1, arg8)
    
    if (eax_13 != 0)
        int32_t ecx_3 = *eax_13 & 0xfff00000
        
        if (arg8 == 0)
            if (ecx_3 == 0x72100000)
            label_4bc371:
                
                if (arg9 != 0)
                    break
                
                *arg7 = eax_13
                arg9 = 1
                *arg6 = edi_1
                int32_t eax_15
                
                if (arg8 != 0)
                    eax_15 = *(eax_13[2] + ((*eax_13 & 0xfffff) << 2))
                else
                    eax_15 = *eax_13[2]
                
                *arg5 = zx.d(*(*(*(arg1 + 0x14) + (eax_15 << 2)) + 0x6d))
        else if (ecx_3 == 0x60000000 || ecx_3 == 0x60500000 || ecx_3 == 0x60a00000
                || ecx_3 == 0x60f00000)
            goto label_4bc371
    
    arg4 += 1
    edi_1 += esi_1
    
    if (arg4 u>= var_c_1)
        return 0

*arg6 = 0
*arg5 = 0
*arg7 = 0
return 1
