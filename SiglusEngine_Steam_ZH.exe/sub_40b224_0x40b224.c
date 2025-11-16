// 函数: sub_40b224
// 地址: 0x40b224
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_54
sub_4081c5(&var_54, arg1)
int16_t* esi = arg2
int32_t ebx = 0
int32_t result = 0
int32_t var_8 = 0
int16_t var_14 = 0xff
int16_t var_12 = 0
char var_10 = 0x11
char var_f = 0
char var_e = 0
char var_d = 0

if ((arg1.w & 0x6001) != 0 || (arg1 & 0xf00) u> 0x800)
    return 0x8876086c

int32_t eax_1 = arg1 & 0x400e

if (eax_1 != 0)
    char var_6c_1
    void* const var_68_1
    
    if (eax_1 != 4)
        var_68_1 = 2
        var_6c_1 = 0
    else
        var_68_1 = 3
        var_6c_1 = 9
    
    sub_40b1e8(esi, var_6c_1, var_68_1, &var_8, 0)
    esi = &esi[4]

int32_t edi
int32_t var_60_1 = edi
void* var_1c

if (var_1c u<= 0)
    goto label_40b303

char var_70_2
void* var_6c_3
char* var_68_3
char var_53

if ((var_53 & 0x90) != 0)
    if (var_1c u> 1)
        sub_40b1e8(esi, 1, var_1c - 2, &var_8, 0)
        esi = &esi[4]
    
    int32_t var_64_2 = 0
    var_68_3 = &var_8
    
    if ((var_53 & 0x10) == 0)
        var_6c_3 = 4
    else
        var_6c_3 = 5
    
    var_70_2 = 2
    goto label_40b2f8

if (var_1c != 5)
    int32_t var_64_3 = 0
    var_68_3 = &var_8
    var_6c_3 = var_1c - 1
    var_70_2 = 1
label_40b2f8:
    sub_40b1e8(esi, var_70_2, var_6c_3, var_68_3, 0)
    esi = &esi[4]
label_40b303:
    
    if ((arg1.b & 0x10) != 0)
        sub_40b1e8(esi, 3, 2, &var_8, 0)
        esi = &esi[4]
    
    if ((arg1.b & 0x20) != 0)
        sub_40b1e8(esi, 4, nullptr, &var_8, 0)
        esi = &esi[4]
    
    if ((arg1.b & 0x40) != 0)
        sub_40b1e8(esi, 0xa, 4, &var_8, 0)
        esi = &esi[4]
    
    if ((arg1.b & 0x80) != 0)
        sub_40b1e8(esi, 0xa, 4, &var_8, 1)
        esi = &esi[4]
    
    int32_t var_18
    
    if (var_18 u> 0)
        do
            sub_40b1e8(esi, 5, (sub_408295(&var_54, ebx) u>> 2) - 1, &var_8, ebx.b)
            esi = &esi[4]
            ebx += 1
        while (ebx u< var_18)
    
    *esi = var_14.d
    *(esi + 4) = var_10.d
else
    result = 0x8876086c

return result
