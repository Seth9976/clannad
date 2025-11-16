// 函数: sub_4490e5
// 地址: 0x4490e5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
void* eax_1 = *(arg1[0x2c] + (ebx[5] << 2))
int32_t edi
int32_t var_28 = edi
int32_t ecx_1

if (*(eax_1 + 0x40) != 0)
    ecx_1 = *(arg1[0xe] + 0x10)
else
    ecx_1 = arg1[8]

void* eax_4 = *(eax_1 + 0x2c) + ebx[6] + ecx_1
int32_t* i_3 = *(eax_4 + 0x10)
int32_t edx = *(eax_4 + 4)
int32_t* i_4

if (i_3 u<= 1)
    i_4 = 1
    i_3 = 1
else
    i_4 = i_3

int32_t* edi_1 = *(eax_4 + 0x14)
int32_t eax_5 = *(eax_4 + 0x18)

if (edx u<= 1)
    int32_t edi_6 = arg1[8]
    void** esi_4 = arg3
    void* edx_7 = *esi_4 + edi_6
    void* eax_22 = ebx[0xc] + edi_6
    arg2 = edx_7
    
    if (i_3 u> 0)
        arg4 = edi_1 << 2
        arg5 = i_3
        int32_t* i
        
        do
            int32_t* ecx_11 = arg4
            int32_t esi_8
            int32_t edi_8
            edi_8, esi_8 = __builtin_memcpy(edx_7, eax_22, ecx_11 u>> 2 << 2)
            eax_22 += ecx_11
            edx_7 = &arg2[4]
            i = arg5
            arg5 -= 1
            __builtin_memcpy(edi_8, esi_8, ecx_11 & 3)
            arg2 = edx_7
        while (i != 1)
        i_3 = i_4
        esi_4 = arg3
    
    ebx[0xc] = *esi_4
    *esi_4 += i_3 << 4
else if (edx u<= 3)
    int32_t eax_13 = arg1[8]
    int32_t* edi_3 = arg4
    void** esi_2 = ebx[0xc] + eax_13
    int32_t* edx_4 = *edi_3 + eax_13
    arg3 = esi_2
    arg2 = edx_4
    
    if (i_3 u> 0)
        int32_t* i_2 = i_3
        int32_t* i_1
        
        do
            int32_t* var_10_1 = arg2
            
            if (edi_1 u> 0)
                int32_t eax_18 = eax_5 << 2
                arg5 = edi_1
                int32_t* j
                
                do
                    int32_t* edi_4 = arg2
                    arg3 = &arg3[eax_5]
                    arg2 = &arg2[4]
                    int32_t esi_3
                    int32_t edi_5
                    edi_5, esi_3 = __builtin_memcpy(edi_4, esi_2, eax_18 u>> 2 << 2)
                    j = arg5
                    arg5 -= 1
                    __builtin_memcpy(edi_5, esi_3, eax_18 & 3)
                    esi_2 = arg3
                while (j != 1)
                edi_3 = arg4
            
            arg2 = &arg2[(4 - edi_1) * 4]
            j_sub_4023fb(var_10_1, var_10_1)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        i_3 = i_4
    
    ebx[0xc] = *edi_3
    *edi_3 += i_3 << 6
else if (edx == 5)
    int32_t* eax_6 = ebx[0xc]
    void* ecx_3 = arg1[8]
    void** edx_1 = ebx[0xb]
    arg4 = eax_6
    arg3 = edx_1
    int32_t eax_7 = sub_443af4(ecx_3, &arg3, &arg4)
    ebx[0xc] = *arg5
    *arg5 += eax_7
    int32_t var_2c_2 = ebx[3]
    *ebx = ebx[0xc] + arg1[8]
    ebx[1] = arg1[8] + ebx[0xb]
    int32_t result = (*(*arg1 + 0x50))(arg1, not.d(ebx), ecx_3 + eax_6, var_2c_2)
    
    if (result s< 0)
        return result

return 0
