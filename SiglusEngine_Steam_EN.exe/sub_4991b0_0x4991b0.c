// 函数: sub_4991b0
// 地址: 0x4991b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_224
int32_t eax_1 = __security_cookie ^ &var_224

if (data_108fab0 == 0)
    sub_5f02dd(eax_1 ^ &var_224)
    return 1

int32_t esi = 0
void var_218
char* eax_3

if (data_1af44cc == 0)
    void* var_22c = &data_108fa8c
    int32_t var_230 = 0x134fd78
    char* var_234_1 = &data_1352208
    eax_3 = sub_4c84d0(&var_218, "%s\%s\%s")
else if (data_1af44c8 != 0)
    char const* const var_22c_2 = "KINETICDATA.PAK"
    void* var_230_2 = &data_13517e0
    eax_3 = sub_4c84d0(&var_218, "%s\%s")
    esi = data_1af44c8
else
    void* var_22c_1 = &data_108fa8c
    void* var_230_1 = &data_13517e0
    eax_3 = sub_4c84d0(&var_218, "%s\%s")

int32_t var_21c = 0
BOOL var_220 = 0
int32_t eax_4 = sub_4c3da0(eax_3, 0xffffffff, &var_218, 0xffffffff)
int32_t result

if (eax_4 != 1)
label_4992f2:
    
    if (data_108fab0 != 1)
        result = 1
    else
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_4, data_72d6ac, data_719b6c, 0x61b1b4, nullptr), 
                    data_72d6ac, data_719b6c, 0x61b1b4, nullptr), 
                data_72d6ac, data_719b6c, 0x61b1b4, nullptr)
            sub_4a1e40(3)
        
        result = 0
else
    sub_4c4a00(&var_220, &var_21c, &var_218, &var_220, "SEEN_PACK_HEADER", esi, 0x13880, 
        0xffffffff, 0xffffffff)
    eax_4 = var_21c
    
    if (eax_4 == 0)
        goto label_4992f2
    
    data_1b8be88 = eax_4
    data_1b8be84 = var_220
    
    if (esi == 0)
        int32_t var_22c_3 = 0x1bfdd34
        sub_4c3c80(0xffffffff)
    
    result = 1

sub_499150()
sub_5f02dd(eax_1 ^ &var_224)
return result
