// 函数: sub_498120
// 地址: 0x498120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t edi_1 = arg3 + arg4

if (edi_1 u> arg2[1] || arg4 u> arg2[3] || *arg2 == 0)
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 0x16
    (*eax_1)(arg1)

int32_t eax_2 = arg2[6]

if (arg3 u< eax_2 || edi_1 u> arg2[4] + eax_2)
    if (arg2[0xa] == 0)
        void* eax_4 = *arg1
        *(eax_4 + 0x14) = 0x45
        (*eax_4)(arg1)
    
    if (arg2[9] != 0)
        sub_497f30(arg2, arg1, 1)
        arg2[9] = 0
    
    int32_t eax_7 = arg3
    
    if (eax_7 u<= arg2[6])
        int32_t ecx_1 = arg2[4]
        eax_7 = edi_1 - ecx_1
        
        if (edi_1 - ecx_1 s< 0)
            eax_7 = 0
    
    arg2[6] = eax_7
    sub_497f30(arg2, arg1, 0)

int32_t edi_2 = arg2[7]

if (edi_2 u>= edi_1)
label_498217:
    
    if (arg5 != 0)
        arg2[9] = 1
else
    if (edi_2 u< arg3)
        if (arg5 != 0)
            void* eax_9 = *arg1
            *(eax_9 + 0x14) = 0x16
            (*eax_9)(arg1)
        
        edi_2 = arg3
    
    if (arg5 != 0)
        arg2[7] = edi_1
    
    if (arg2[8] != 0)
        int32_t eax_11 = arg2[6]
        int32_t i = edi_2 - eax_11
        int32_t ebx_2 = arg2[2] << 7
        
        for (; i u< edi_1 - eax_11; i += 1)
            sub_4985f0(*(*arg2 + (i << 2)), ebx_2)
        
        goto label_498217
    
    if (arg5 == 0)
        void* eax_18 = *arg1
        *(eax_18 + 0x14) = 0x16
        (*eax_18)(arg1)
        return *arg2 + ((arg3 - arg2[6]) << 2)
    
    arg2[9] = 1

return *arg2 + ((arg3 - arg2[6]) << 2)
