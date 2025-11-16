// 函数: sub_4eaa70
// 地址: 0x4eaa70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_4c4
int32_t eax_1 = __security_cookie ^ &var_4c4
void var_4b8
void* edi = &var_4b8

if (sub_461d30(&var_4b8, arg2, arg4, &var_4b8) != 1)
    edi = nullptr

int32_t var_438[0x10b]
sub_461dd0(sub_461bb0(&var_438), *(arg3 + 0x13b3c), &var_438, arg4, nullptr, nullptr)
void* esi_1 = *(arg3 + 0x13b3c)
bool cond:0 = data_7035c8 == 0
data_1af1728 = 0
char var_4c1 = 1

if (cond:0 || data_976f94 == 0)
    var_4c1 = 0
else
    void* eax_5 = data_976f9c
    
    if (data_12a292c == 0)
        if (*(eax_5 + 0x1c4) != 1)
            var_4c1 = 0
    else if (*(eax_5 + 0x1c4) == 2)
        var_4c1 = 0

sub_5800d0(esi_1)

if (edi != 0)
    sub_5757a0(edi)

void* ebx

if (esi_1 u> 0x3f || *(esi_1 * 0x3920 + &data_f8d2e0) == 0 || data_187c51f != 0)
    ebx:1.b = 0
else
    ebx:1.b = 1

if (edi != 0)
    sub_5757f0(edi)

void* ecx_3
ecx_3.b = 0
sub_57fcf0(ecx_3, 1)
void* eax_7 = &data_f8d300
int32_t i_1 = 0x10
int32_t i

do
    if (*(eax_7 + 8) == 0 || *eax_7 != 0)
        *(eax_7 - 0x20) = 0
    
    if (*(eax_7 + 0x3928) == 0 || *(eax_7 + 0x3920) != 0)
        *(eax_7 + 0x3900) = 0
    
    if (*(eax_7 + 0x7248) == 0 || *(eax_7 + 0x7240) != 0)
        *(eax_7 + 0x7220) = 0
    
    if (*(eax_7 + 0xab68) == 0 || *(eax_7 + 0xab60) != 0)
        *(eax_7 + 0xab40) = 0
    
    eax_7 += 0xe480
    i = i_1
    i_1 -= 1
while (i != 1)
ebx.b = data_187c51f

if (ebx.b == 0)
    sub_57d340()

if (ebx:1.b != 0 && esi_1 u<= 0x3f)
    bool cond:2_1 = *(esi_1 * 0x3920 + &data_f8d308) != 0
    *(esi_1 * 0x3920 + &data_f8d2e0) = 1
    
    if (not(cond:2_1))
        data_13701d8 = 0
        data_137010c = 1
    
    *(esi_1 * 0x3920 + &data_f8d308) = 1

if (edi != 0)
    sub_575840(edi)

if (var_4c1 == 0)
label_4eacc9:
    
    if (esi_1 u<= 0x3f)
        *(esi_1 * 0x3920 + &data_f8d30c) = 1
    
    if (edi != 0)
        sub_575890(edi)
else
    int32_t eax_10 = sub_57fac0(0)
    
    if (eax_10 == 0)
        if (data_1311178 == eax_10 && data_13926a4 == eax_10 && data_13926a0 == eax_10
                && data_702fe4 == eax_10 && data_702fd8 == eax_10 && data_702fcc == eax_10
                && data_91e8fc s< 0x80 && sub_475310() == 0)
            *(arg3 + 8) = *(arg2 + 0x20) - *(arg2 + 0x18)
            sub_4977f0(7, nullptr)
            ebx.b = data_187c51f
        
        goto label_4eacc9

if (ebx.b == 0)
    sub_57d490(esi_1)
    
    if (edi != 0)
        sub_5758c0(edi)

sub_4625c0(&var_438, sub_57ce10() == 0)
void* result = sub_461c00(&var_438)
sub_5f02dd(eax_1 ^ &var_4c4)
return result
