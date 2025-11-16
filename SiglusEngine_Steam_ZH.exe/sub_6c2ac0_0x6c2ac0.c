// 函数: sub_6c2ac0
// 地址: 0x6c2ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_4 = arg1
arg1[1] = *arg1
arg1[3] = 0
sub_5979b0(arg1, 4)
int32_t* ecx = *arg1

if (ecx == arg1[1])
    ecx = nullptr

*(ecx + arg1[3]) = 0
arg1[3] += 4
sub_5979b0(arg1, arg1[3] + 4)
int32_t* ecx_2 = *arg1

if (ecx_2 == arg1[1])
    ecx_2 = nullptr

*(ecx_2 + arg1[3]) = 0
arg1[3] += 4
sub_5979b0(arg1, arg1[3] + 4)
int32_t* ecx_4 = *arg1

if (ecx_4 == arg1[1])
    ecx_4 = nullptr

*(ecx_4 + arg1[3]) = 0x50000809
arg1[3] += 4
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_6 = *arg1

if (ecx_6 == arg1[1])
    ecx_6 = nullptr

*(ecx_6 + arg1[3]) = 0
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_8 = *arg1

if (ecx_8 == arg1[1])
    ecx_8 = nullptr

*(ecx_8 + arg1[3]) = 0
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_10 = *arg1

if (ecx_10 == arg1[1])
    ecx_10 = nullptr

*(ecx_10 + arg1[3]) = 0x64
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_12 = *arg1

if (ecx_12 == arg1[1])
    ecx_12 = nullptr

*(ecx_12 + arg1[3]) = 0xa0
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 4)
int32_t* ecx_14 = *arg1

if (ecx_14 == arg1[1])
    ecx_14 = nullptr

*(ecx_14 + arg1[3]) = 0x3e8
arg1[3] += 4
sub_6c2c40(arg1, &NT3::Cc_listview::Citem_combo::`vftable'{for `NT3::Cc_combobox'}.__offset(0x8))
sub_6c2c40(arg1, nullptr)
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_18 = *arg1

if (ecx_18 == arg1[1])
    ecx_18 = nullptr

int32_t result = arg1[3]
*(ecx_18 + result) = 0
arg1[3] += 2
return result
