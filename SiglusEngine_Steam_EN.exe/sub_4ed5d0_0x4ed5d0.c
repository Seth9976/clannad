// 函数: sub_4ed5d0
// 地址: 0x4ed5d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3[6] == 0 && arg3[3] == 0)
    return 

int32_t edi_1 = *arg3

if (sub_4ec600(arg2, edi_1).b != 0)
    return 

int32_t* eax = edi_1 * 0x3920

if (edi_1 u<= 0x3f)
    eax[0x3e34c8] = 0

int32_t eax_1 = data_1b8ad80:0xc

if (eax_1 == edi_1 && data_1b8ad80.d != 0)
    if (eax_1 u<= 0x3f && *(eax_1 * 0x3920 + &data_f89ba4) != 0)
        *(eax_1 * 0x3920 + &data_f89bcc) += 1
    
    sub_499600(&data_1b8ad80)

sub_576070(edi_1)

if (*(eax + &data_f8d2dc) != 0 || data_187c51f == 0)
    data_187c51d = 0

eax[0x3e34c6] = 0
*(eax + &data_f8d308) = 1
void* ecx_4 = sub_57e2b0(edi_1, 0x3f)

if (*arg3 u<= 0x3f)
    arg3[0xe] = arg3[0xa]
    arg3[0xf] = arg3[0xb]
    arg3[0x10] = arg3[0xc]
    arg3[0x11] = arg3[0xd]

if (arg3[7] == 0)
    char* eax_9 = arg3[6]
    
    if (eax_9 != 0 && *eax_9 != 0)
        arg3[9] = eax_9
        
        while (*eax_9 != 0)
            void* var_14_1 = ecx_4
            int32_t var_18_1 = 0
            ecx_4 = sub_4ed130(eax_9, arg2, ecx_4, arg3, 0, 1)
            eax_9 = arg3[9]
        
        arg3[0xc] = 1

arg3[9] = arg3[3]
