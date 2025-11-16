// 函数: sub_413ad0
// 地址: 0x413ad0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg3

if (arg2 u> 0x20 || esi == 0)
    return 

int32_t eax_1 = arg2 << 5

if ((&data_976b50)[arg2 * 8] == 0)
    arg3 = sub_411500(eax_1, data_70300c, arg2, data_7030dc)

int32_t eax_2 = arg7

if (eax_2 s< 0)
    eax_2 = 0
else if (eax_2 s> 0xff)
    eax_2 = 0xff

char var_c = eax_2.b
int32_t eax_3 = arg8

if (eax_3 s< 0)
    eax_3 = 0
else if (eax_3 s> 0xff)
    eax_3 = 0xff

char var_b_1 = eax_3.b
int32_t eax_4 = arg9

if (eax_4 s< 0)
    eax_4 = 0
else if (eax_4 s> 0xff)
    eax_4 = 0xff

char var_a_1 = eax_4.b
char* eax_5 = arg10

if (eax_5 s< 0)
    eax_5 = nullptr
else if (eax_5 s> 0xff)
    eax_5 = 0xff

char var_9_1 = eax_5.b
char* var_10_1

if (arg15 == 0)
    var_10_1 = nullptr
else
    int32_t ebx_1 = arg11
    
    if (ebx_1 == 0xffffffff)
        var_10_1 = nullptr
    else
        int32_t edx_1 = arg12
        
        if (edx_1 == 0xffffffff)
            var_10_1 = nullptr
        else
            arg3 = arg13
            
            if (arg3 == 0xffffffff)
                var_10_1 = nullptr
            else
                eax_5 = arg14
                
                if (eax_5 == 0xffffffff)
                    var_10_1 = nullptr
                else
                    if (ebx_1 s< 0)
                        ebx_1 = 0
                    else if (ebx_1 s> 0xff)
                        ebx_1 = 0xff
                    
                    char var_8 = ebx_1.b
                    
                    if (edx_1 s< 0)
                        edx_1 = 0
                    else if (edx_1 s> 0xff)
                        edx_1 = 0xff
                    
                    char var_7_1 = edx_1.b
                    
                    if (arg3 s< 0)
                        arg3 = nullptr
                    else if (arg3 s> 0xff)
                        arg3 = 0xff
                    
                    char var_6_1 = arg3.b
                    
                    if (eax_5 s>= 0)
                        if (eax_5 s> 0xff)
                            eax_5 = 0xff
                        
                        char var_5_2 = eax_5.b
                        eax_5 = &var_8
                        var_10_1 = &var_8
                    else
                        char var_5_1 = 0
                        eax_5 = &var_8
                        var_10_1 = &var_8

int32_t var_38_2 = 1
sub_4c6e40(eax_5, arg6, arg3, arg15, 2, 0xffffffff)
void** edx_3 = arg4
void* eax_7 = *arg5
void* ecx_1 = *edx_3
int16_t* eax_8
eax_8.b = *esi
void* ecx_2 = ecx_1 + arg6
void* var_14_1 = ecx_2

while (eax_8.b != 0)
    uint32_t ecx_5
    void* edi_1
    
    if (eax_8.b u< 0x80)
    label_413c6a:
        ecx_5 = zx.d(eax_8.b)
        esi = &esi[1]
        edi_1 = arg6 s>> 1
    else
        if (eax_8.b u< 0xa0)
            if (eax_8.b u>= 0xfe)
                goto label_413c6a
        else if (eax_8.b u<= 0xdf || eax_8.b u>= 0xfe)
            goto label_413c6a
        
        edi_1 = arg6
        ecx_5 = zx.d(eax_8.b) << 8 | zx.d(esi[1])
        esi = &esi[2]
    
    sub_4c7f10(eax_1, 0, (&data_976b54)[arg2 * 8], (&data_976b58)[arg2 * 8], 
        (&data_976b5c)[arg2 * 8], ecx_5, *edx_3, *arg5, &var_c, var_10_1, nullptr, nullptr, 0)
    edx_3 = arg4
    eax_8.b = *esi
    ecx_2 = var_14_1 + edi_1
    var_14_1 = ecx_2
    *edx_3 += edi_1

if (arg2 == 0)
    int16_t* var_38_3 = eax_7 + arg6
    void* var_3c_1 = ecx_2
    sub_494c90(ecx_1, eax_7)
    data_703004 = 1

sub_564200(arg2)
