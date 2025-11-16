// 函数: sub_497fe0
// 地址: 0x497fe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg3 + arg4
int32_t edi
int32_t var_10 = edi
int32_t* edi_1

if (ebx u> arg2[1] || arg4 u> arg2[3] || *arg2 == 0)
    edi_1 = arg1
    void* eax_1 = *edi_1
    *(eax_1 + 0x14) = 0x16
    (*eax_1)(edi_1)
else
    edi_1 = arg1

int32_t eax_2 = arg2[6]

if (arg3 u< eax_2 || ebx u> arg2[4] + eax_2)
    if (arg2[0xa] == 0)
        void* eax_4 = *edi_1
        *(eax_4 + 0x14) = 0x45
        (*eax_4)(edi_1)
    
    if (arg2[9] != 0)
        sub_497e90(arg2, edi_1, 1)
        arg2[9] = 0
    
    int32_t eax_7 = arg3
    
    if (eax_7 u<= arg2[6])
        int32_t ecx_1 = arg2[4]
        eax_7 = ebx - ecx_1
        
        if (ebx - ecx_1 s< 0)
            eax_7 = 0
    
    arg2[6] = eax_7
    sub_497e90(arg2, edi_1, 0)

int32_t eax_8 = arg2[7]

if (eax_8 u>= ebx)
label_4980ce:
    
    if (arg5 != 0)
        arg2[9] = 1
else
    int32_t edi_2
    
    if (eax_8 u>= arg3)
        edi_2 = eax_8
    else
        if (arg5 != 0)
            void* eax_10 = *edi_1
            *(eax_10 + 0x14) = 0x16
            (*eax_10)(edi_1)
        
        edi_2 = arg3
    
    if (arg5 != 0)
        arg2[7] = ebx
    
    if (arg2[8] != 0)
        int32_t* eax_12 = arg2[2]
        int32_t eax_13 = arg2[6]
        
        for (int32_t i = edi_2 - eax_13; i u< ebx - eax_13; i += 1)
            sub_4985f0(*(*arg2 + (i << 2)), eax_12)
        
        goto label_4980ce
    
    if (arg5 == 0)
        void* eax_19 = *arg1
        *(eax_19 + 0x14) = 0x16
        (*eax_19)(arg1)
        return *arg2 + ((arg3 - arg2[6]) << 2)
    
    arg2[9] = 1

return *arg2 + ((arg3 - arg2[6]) << 2)
