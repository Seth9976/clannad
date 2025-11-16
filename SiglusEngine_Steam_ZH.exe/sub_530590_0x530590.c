// 函数: sub_530590
// 地址: 0x530590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (*(arg1 + 0xb8) != 0)
    var_8 = arg1 + 0x31c
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b644b4)
    var_8 = arg1 + 0x2a58
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b644cc)
    var_8 = arg1 + 0x1d58
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b644e4)
    var_8 = arg1 + 0x58c4
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b644fc)
    var_8 = arg1 + 0x4738
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b64514)
    var_8 = arg1 + 0x5fd0
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b6452c)
    var_8 = arg1 + 0x676c
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b64544)
    var_8 = arg1 + 0x6de8
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b6455c)
    var_8 = arg1 + 0x89c4
    sub_530ba0(arg1 + 0x310, &var_8)
    return sub_6c3970(arg1 + 0xbc, &data_b64574)

if (*(data_bac510 + 0xbb48) != 0)
    var_8 = arg1 + 0x31c
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b644b4)

void* eax_12 = data_bac510

if (*(eax_12 + 0xbb49) != 0)
    int32_t eax_13 = *(eax_12 + 0xbb40)
    int32_t eax_15
    
    if (eax_13 != 0)
        eax_15 = arg1 + 0x3a88
    
    if (eax_13 == 0 || eax_13 != 1)
        eax_15 = arg1 + 0x2a58
    
    var_8 = eax_15
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b644cc)

if (*(data_bac510 + 0xbb4a) != 0)
    var_8 = arg1 + 0x1d58
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b644e4)

if (*(data_bac510 + 0xbb4b) != 0)
    var_8 = arg1 + 0x58c4
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b644fc)

void* eax_20 = data_bac510

if (*(eax_20 + 0xbb4c) != 0)
    int32_t eax_21 = *(eax_20 + 0xbb44)
    int32_t eax_25
    
    if (eax_21 == 0)
        eax_25 = arg1 + 0x4738
    else if (eax_21 == 1)
        eax_25 = arg1 + 0x4fa0
    else if (eax_21 != 2)
        eax_25 = arg1 + 0x4738
    else
        eax_25 = arg1 + 0x53dc
    
    var_8 = eax_25
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b64514)

if (*(data_bac510 + 0xbb4d) != 0)
    var_8 = arg1 + 0x5fd0
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b6452c)

if (*(data_bac510 + 0xbb4e) != 0)
    var_8 = arg1 + 0x676c
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b64544)

if (*(data_bac510 + 0xbb4f) != 0)
    var_8 = arg1 + 0x6de8
    sub_530ba0(arg1 + 0x310, &var_8)
    sub_6c3970(arg1 + 0xbc, &data_b6455c)

LRESULT result = data_bac510

if (*(result + 0xbb50) == 0)
    return result

var_8 = arg1 + 0x89c4
sub_530ba0(arg1 + 0x310, &var_8)
return sub_6c3970(arg1 + 0xbc, &data_b64574)
