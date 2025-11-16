// 函数: sub_46fde0
// 地址: 0x46fde0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg2 + 0x4c) == 0)
    return 

int32_t eax
eax.b = *(arg2 + 0x48)
int32_t var_24_1 = eax

if (eax.b == 0)
    return 

int32_t ecx = *(arg2 + 0x78)
int32_t var_2c_1
int32_t var_c_1
int32_t ecx_1
int32_t edx
int32_t ebx_1
int32_t edi_1

if (ecx != 0xffffffff || *(arg2 + 0x7c) != ecx)
label_46fe47:
    edx = data_702ff4
    ebx_1 = data_702ffc
    eax = *(arg2 + 0x84)
    
    if (ecx s> edx)
        edx = ecx
    
    int32_t ecx_2 = *(arg2 + 0x80)
    edi_1 = data_703000
    
    if (ecx_2 s< ebx_1)
        ebx_1 = ecx_2
    
    var_c_1 = ecx_2
    ecx_1 = data_702ff8
    var_2c_1 = eax
    
    if (*(arg2 + 0x7c) s> ecx_1)
        ecx_1 = *(arg2 + 0x7c)
    
    if (eax s< edi_1)
        edi_1 = eax
else
    int32_t eax_1 = *(arg2 + 0x80)
    var_c_1 = eax_1
    
    if (eax_1 != ecx)
        goto label_46fe47
    
    eax = *(arg2 + 0x84)
    var_2c_1 = eax
    
    if (eax != ecx)
        goto label_46fe47
    
    edx = data_702ff4
    ebx_1 = data_702ffc
    ecx_1 = data_702ff8
    edi_1 = data_703000

char var_18_1 = ecx_1.b

if (edx s> ebx_1 || ecx_1 s> edi_1)
    return 

int32_t edx_2 = *arg1 + *(arg2 + 4)
int32_t edi_3 = arg1[1] + *(arg2 + 8)
int32_t var_8_1 = arg1[2] + *(arg2 + 4)
int32_t ebx_6 = arg1[3] + *(arg2 + 8)
int32_t ecx_4 = var_8_1
int32_t var_20_1 = edx_2

if (edx_2 s> ecx_4)
    int32_t eax_2 = edx_2
    var_20_1 = ecx_4
    edx_2 = ecx_4
    ecx_4 = eax_2
    var_8_1 = ecx_4

if (edi_3 s> ebx_6)
    int32_t eax_3 = edi_3
    edi_3 = ebx_6
    ebx_6 = eax_3

int32_t eax_4 = *(arg2 + 0x7c)

if (*(arg2 + 0x78) != 0xffffffff || eax_4 != 0xffffffff || var_c_1 != eax_4 || var_2c_1 != eax_4)
    if (*(arg2 + 0x78) s> edx_2)
        edx_2 = *(arg2 + 0x78)
    
    var_20_1 = edx_2
    
    if (var_c_1 s< ecx_4)
        ecx_4 = var_c_1
    
    var_8_1 = ecx_4
    
    if (eax_4 s> edi_3)
        edi_3 = eax_4
    
    int32_t eax_5 = *(arg2 + 0x84)
    
    if (eax_5 s< ebx_6)
        ebx_6 = eax_5

int32_t eax_6 = *(arg2 + 0xc)
int32_t var_b0_1
int32_t var_ac_1
int32_t var_a8_1
int32_t var_a4_1
int32_t var_a0_1
char var_9c_1
int32_t var_98_1
int32_t var_94_1
int32_t var_90_1
int32_t var_8c_1
int32_t var_88_1
int32_t var_84_1
char var_80_1
char var_7c_1
char var_78_1
char var_74_1
char var_70_1
char var_6c_1
int32_t var_68_1
int32_t var_64_1
int32_t var_60_1
uint32_t var_5c_1
char var_58_1
uint32_t var_54_1
uint32_t eax_16

if (eax_6 == 0x64)
    int32_t ecx_10 = zx.d(*(arg2 + 0x35)) * zx.d(var_24_1.b)
    int32_t var_40_3 = 0
    int32_t var_44_3 = ecx_10 s/ 0xff
    int32_t var_48_3 = 0
    int32_t var_4c_3 = zx.d(*(arg2 + 0x34)) - 0xff
    int32_t var_50_2 = zx.d(*(arg2 + 0x33)) - 0xff
    eax_16 = zx.d(*(arg2 + 0x32)) - 0xff
    var_54_1 = eax_16
    __builtin_memset(&var_68_1, 0, 0x11)
    var_6c_1 = 0
    var_70_1 = 0
    var_74_1 = 0
    var_78_1 = 0
    var_7c_1 = 0
    var_80_1 = 0
    var_84_1 = 0
    var_88_1 = 0
    var_8c_1 = 0
    var_90_1 = ecx_10
    var_94_1 = edi_1
    var_98_1 = ebx_1
    var_9c_1 = var_18_1
    var_a0_1 = edx
    var_a4_1 = ebx_6
    var_a8_1 = var_8_1
    var_ac_1 = edi_3
    var_b0_1 = var_20_1
else
    if (eax_6 == 0x65)
        uint32_t esi_1 = zx.d(*(arg2 + 0x32))
        int32_t eax_25 = zx.d(*(arg2 + 0x35)) * zx.d(var_24_1.b) s/ 0xff
        
        if (esi_1 s< 0)
            esi_1 = 0
        else if (esi_1 s> 0xff)
            esi_1 = 0xff
        
        uint32_t ecx_7 = zx.d(*(arg2 + 0x33))
        
        if (ecx_7 s< 0)
            ecx_7 = 0
        else if (ecx_7 s> 0xff)
            ecx_7 = 0xff
        
        uint32_t edx_6 = zx.d(*(arg2 + 0x34))
        
        if (edx_6 s< 0)
            edx_6 = 0
        else if (edx_6 s> 0xff)
            edx_6 = 0xff
        
        if (eax_25 s< 0)
            eax_25 = 0
        else if (eax_25 s> 0xff)
            eax_25 = 0xff
        
        int32_t var_40_2 = 0
        int32_t var_44_2 = eax_25
        int32_t var_48_2 = 0
        int32_t var_4c_2 = 0
        int32_t var_70_2 = 0
        int32_t var_74_2 = 0
        int32_t var_78_2 = 0
        int32_t var_7c_2 = 0
        sub_586580(eax_25, data_702fec, data_702fe8, data_702ff0, var_20_1, edi_3, var_8_1, ebx_6, 
            esi_1.b, ecx_7.b, edx_6.b, edx, var_18_1, ebx_1, edi_1, ecx_7, 0, 0, 0, 0)
        return 
    
    int32_t var_40_1 = *(arg2 + 0xc)
    int32_t var_44_1 = var_24_1
    int32_t var_48_1 = *(arg2 + 0x44)
    int32_t var_4c_1 = *(arg2 + 0x40)
    int32_t var_50_1 = *(arg2 + 0x3c)
    var_54_1 = *(arg2 + 0x38)
    var_58_1 = *(arg2 + 0x35)
    var_5c_1 = zx.d(*(arg2 + 0x34))
    var_60_1 = zx.d(*(arg2 + 0x33))
    var_64_1 = zx.d(*(arg2 + 0x32))
    var_68_1 = zx.d(*(arg2 + 0x31))
    var_6c_1 = *(arg2 + 0x30)
    var_70_1 = (*(arg2 + 0x2c)).b
    eax_16 = zx.d(*(arg2 + 0x14))
    var_74_1 = (*(arg2 + 0x28)).b
    var_78_1 = (*(arg2 + 0x24)).b
    var_7c_1 = (*(arg2 + 0x20)).b
    var_80_1 = (*(arg2 + 0x1c)).b
    var_84_1 = *(arg2 + 0x18)
    var_88_1 = eax_16
    var_8c_1 = *(arg2 + 0x10)
    var_90_1 = ecx_4
    var_94_1 = edi_1
    var_98_1 = ebx_1
    var_9c_1 = var_18_1
    var_a0_1 = edx
    var_a4_1 = ebx_6
    var_a8_1 = ecx_4
    var_ac_1 = edi_3
    var_b0_1 = edx_2

sub_58bcc0(eax_16, data_702fec, data_702fe8, data_702ff0, var_b0_1, var_ac_1, var_a8_1, var_a4_1, 
    var_a0_1, var_9c_1, var_98_1, var_94_1, var_90_1, var_8c_1, var_88_1, var_84_1, var_80_1, 
    var_7c_1, var_78_1, var_74_1, var_70_1, var_6c_1, var_68_1, var_64_1, var_60_1, var_5c_1, 
    var_58_1, var_54_1)
