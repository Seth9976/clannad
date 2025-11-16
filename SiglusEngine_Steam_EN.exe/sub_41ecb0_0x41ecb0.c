// 函数: sub_41ecb0
// 地址: 0x41ecb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1356f58 == 0 || data_1356f54 == 0)
    return 

int32_t eax_1 = data_1356f84
int32_t ecx_1 = data_1356f8c
int32_t edx_1 = data_1356f88
int32_t esi_1 = data_1356f90
int32_t eax
int32_t ecx_2
int32_t edx_2
int32_t ebx_1

if (eax_1 != 0xffffffff || edx_1 != 0xffffffff || ecx_1 != edx_1 || esi_1 != edx_1)
    ebx_1 = data_702ff4
    
    if (eax_1 s> ebx_1)
        ebx_1 = eax_1
    
    eax = data_702ffc
    
    if (ecx_1 s< eax)
        eax = ecx_1
    
    ecx_2 = data_702ff8
    
    if (edx_1 s> ecx_2)
        ecx_2 = edx_1
    
    edx_2 = data_703000
    
    if (esi_1 s< edx_2)
        edx_2 = esi_1
else
    ebx_1 = data_702ff4
    eax = data_702ffc
    ecx_2 = data_702ff8
    edx_2 = data_703000

char var_10_1 = ecx_2.b

if (ebx_1 s> eax || ecx_2 s> edx_2)
    return 

int32_t esi_2 = data_1356f70
int32_t ecx_3 = data_1356f74
int32_t edx_3 = data_1356f7c
int32_t edi_1 = data_1356f78

if (esi_2 s> edi_1)
    int32_t eax_2 = esi_2
    esi_2 = edi_1
    edi_1 = eax_2

if (ecx_3 s> edx_3)
    int32_t eax_3 = ecx_3
    ecx_3 = edx_3
    edx_3 = eax_3

uint32_t eax_4 = zx.d(data_1356f54)
int32_t var_20_1 = 0

if (data_1356eec == 0xffffffff)
    int32_t var_24_1 = 0xff
    int32_t var_28_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_30 = 0
    sub_58bcc0(eax_4, data_702fec, data_702fe8, data_702ff0, esi_2, ecx_3, edi_1, edx_3, ebx_1, 
        var_10_1, eax, edx_2, ecx_3, 0, 0, 0, 0, 0, 0, 0, 0, 0, eax_4, 0, 0, 0, 0, 0)
    return 

uint32_t var_24_2 = eax_4
int32_t var_28_2 = 0
int32_t var_2c_2 = 0
int32_t var_50_1 = 0
int32_t var_54_1 = 0
int32_t var_58_1 = 0
int32_t var_5c_1 = 0
uint32_t eax_9 = zx.d((data_1356eec).b)
sub_586580(eax_9, data_702fec, data_702fe8, data_702ff0, esi_2, ecx_3, edi_1, edx_3, eax_9.b, 
    data_1356ef0.b, data_1356ef4.b, ebx_1, var_10_1, eax, edx_2, ecx_3, 0, 0, 0, 0)
