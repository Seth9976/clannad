// 函数: sub_6eed40
// 地址: 0x6eed40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c
int32_t var_8
sub_6eec60(&var_8, &var_c)

if (var_8 == var_c)
    return 0

int32_t var_1c
sub_6eec30(&var_1c, 0)
var_8 = var_1c
int32_t var_18
var_c = var_18
int32_t var_14
int32_t var_10

if (var_14 == 0x6c65746e)
    if (var_10 != 0x49656e69 || var_18 != 0x756e6547)
        return 0
    
label_6eedba:
    sub_6eec30(&var_1c, 1)
    int32_t eax_5 = sub_6eec90(var_10, var_14)
    int32_t ecx_5 = var_1c
    int32_t eax_8 = ecx_5 u>> 4 & 0xf
    
    if ((ecx_5 & 0xf00) == 0x600 && (eax_8 == 9 || eax_8 == 0xd || eax_8 == 0xe))
        return eax_5 & 0xffffff9f
    
    return eax_5

if (var_14 == 0x3638784d)
    if (var_10 != 0x54656e69 || var_18 != 0x756e6547)
        return 0
    
    goto label_6eedba

if (var_14 != 0x444d4163)
    if (var_14 != 0x43534e20)
        if (var_14 != 0x736c7561 || var_10 != 0x48727561 || var_18 != 0x746e6543)
            return 0
        
        sub_6eec30(&var_1c, 1)
        int32_t esi_1 = var_1c
        var_8 = esi_1
        var_c = var_18
        int32_t edi = sub_6eec90(var_10, var_14)
        
        if (esi_1 u< 0x80000001)
            return edi
        
        sub_6eec30(&var_1c, 0x80000001)
        return edi | sub_6eecf0(var_10, var_14)
    
    if (var_10 != 0x79622065 || var_18 != 0x646f6547)
        return 0
else
    if (var_10 != 0x69746e65)
        return 0
    
    if (var_18 != 0x68747541)
        return 0

sub_6eec30(&var_1c, 0x80000000)
int32_t ecx_8 = var_1c
var_8 = ecx_8
var_c = var_18
int32_t edi_2

if (ecx_8 u>= 0x80000001)
    sub_6eec30(&var_1c, 0x80000001)
    var_8 = var_1c
    var_c = var_18
    edi_2 = sub_6eecf0(var_10, var_14)
else
    edi_2 = 0

sub_6eec30(&var_1c, 1)
return edi_2 | sub_6eec90(var_10, var_14)
