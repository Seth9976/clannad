// 函数: sub_71fac0
// 地址: 0x71fac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
*arg1 = arg2
arg1[1] = arg3
arg1[2] = arg4
arg1[3] = arg5
arg1[4] = arg6
int32_t eax_4
eax_4.b = arg7
arg1[5].b = eax_4.b
arg1[6] = arg8
arg1[7] = arg9
arg1[8] = arg10
arg1[9] = arg11
arg1[0x14] = arg16
arg1[0xd] = arg22
arg1[0xe] = arg23
int32_t eax_11
eax_11.b = arg24
arg1[0xf].b = eax_11.b
arg1[0x10] = arg25
arg1[0x11] = arg26
arg1[0x12] = arg27
arg1[0x13] = arg28
arg1[0x1b] = arg29
arg1[0x1c] = arg30
int32_t eax_17
eax_17.b = arg32
arg1[0x1e].b = eax_17.b
arg1[0x23] = arg36
arg1[0x24] = arg37
arg1[0x25] = arg38
int32_t eax_20
eax_20.b = arg42
*(arg1 + 0xa1) = eax_20.b
arg1[0x29] = arg43
arg1[0x20] = arg55
arg1[0x21] = arg56
arg1[0x22] = arg57
arg1[0x26] = arg39
arg1[0x27] = arg40
int32_t eax_26
eax_26.b = arg41
arg1[0x28].b = eax_26.b
eax_26.b = arg33
*(arg1 + 0x79) = eax_26.b
eax_26.b = arg34
*(arg1 + 0x7a) = eax_26.b
arg1[0x1f] = arg35
int32_t eax_27
eax_27.b = arg44
arg1[0x2a].b = eax_27.b
eax_27.b = arg45
arg1[0x1d] = arg31
*(arg1 + 0xc5) = 1
arg1[0x32] = 0
arg1[0x33] = 0
*(arg1 + 0xa9) = eax_27.b
int32_t edi = 0
eax_27.b = arg46
*(arg1 + 0xaa) = eax_27.b
eax_27.b = arg47
*(arg1 + 0xab) = eax_27.b
arg1[0x2b] = arg48
arg1[0x2c] = arg49
arg1[0x2d] = arg50
arg1[0x2e] = arg51
arg1[0x2f] = arg52
arg1[0x30] = arg53
int32_t eax_33
eax_33.b = arg54
arg1[0x31].b = eax_33.b
eax_33.b = arg12
*(arg1 + 0x56) = eax_33.b
eax_33.b = arg13
*(arg1 + 0x55) = eax_33.b
eax_33.b = arg14
arg1[0x15].b = eax_33.b
eax_33.b = arg15
*(arg1 + 0x57) = eax_33.b
arg1[0x16] = arg17
arg1[0x17] = arg18
arg1[0x18] = arg19
arg1[0x19] = arg20
arg1[0x1a] = arg21

if (arg31 == 0x64)
    edi = arg31 - 0x63
    *(arg1 + 0x57) = 0xff

int32_t var_14 = arg31

if (sub_71fd50(arg1) != 0)
    int32_t eax_40 = arg1[0x16]
    
    if (eax_40 == 0)
        int32_t var_14_3 = edi
        int32_t var_18_1 = arg1[0x1a]
        int32_t var_1c_1 = arg1[0x19]
        int32_t var_20_1 = arg1[0x18]
        return sub_7215b0(arg1, arg1[0x17])
    
    if (eax_40 == 1)
        return sub_721900(arg1, arg1[0x17], arg1[0x18], arg1[0x19], arg1[0x1a], edi)
    
    if (eax_40 == 2)
        if (arg1[0x34].b != (eax_40 - 1).b - 1)
            return sub_720940(arg1, edi)
        
        return sub_720700(arg1, edi)

return 0
