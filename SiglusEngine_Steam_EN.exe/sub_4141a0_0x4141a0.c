// 函数: sub_4141a0
// 地址: 0x4141a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2

if (arg3 s>= 0x21 || arg7 s>= 0x21)
    return 

int32_t var_8_1
int32_t esi_3
int32_t edi_1

if (arg8 == 0)
    int32_t ecx = arg5
    
    if (ebx s> ecx)
        int32_t eax = ebx
        ebx = ecx
        ecx = eax
    
    int32_t esi_4 = arg4
    int32_t edx = arg6
    var_8_1 = esi_4
    
    if (esi_4 s> edx)
        int32_t eax_1 = esi_4
        var_8_1 = edx
        esi_4 = edx
        edx = eax_1
    
    edi_1 = data_70300c
    int32_t ecx_2 = ecx - ebx + 1
    int32_t edx_2 = edx - esi_4 + 1
    
    if (ecx_2 s>= edi_1)
        if (ecx_2 s> edi_1 * 0xa)
            ecx_2 = edi_1
        
        edi_1 = ecx_2
    
    esi_3 = data_7030dc
    
    if (edx_2 s>= esi_3)
        if (edx_2 s> esi_3 * 0xa)
            edx_2 = esi_3
        
        esi_3 = edx_2
else if ((&data_976b50)[arg3 * 8] == 0)
    edi_1 = data_70300c
    ebx = 0
    esi_3 = data_7030dc
    var_8_1 = 0
else
    edi_1 = (&data_976b58)[arg3 * 8]
    ebx = 0
    esi_3 = (&data_976b5c)[arg3 * 8]
    var_8_1 = 0

int32_t eax_6 = sub_411350(arg7)

if (arg7 == 0)
    edi_1 = data_70300c
    esi_3 = data_7030dc

sub_411500(eax_6, edi_1, arg7, esi_3)
int32_t var_1c_2 = 0xff
int32_t var_20_1 = 0xffffffff
int32_t var_24_1 = 0xffffffff
int32_t var_28_1 = 0xffffffff
sub_584e80(arg3 << 5, (&data_976b58)[arg7 * 8], (&data_976b54)[arg7 * 8], (&data_976b5c)[arg7 * 8], 
    (&data_976b54)[arg3 * 8], (&data_976b58)[arg3 * 8], (&data_976b5c)[arg3 * 8], ebx, var_8_1, 0, 
    0, 0, 0xff)

if (arg7 == 0)
    data_703008 = 1
    data_703004 = 1

sub_564200(arg7)
