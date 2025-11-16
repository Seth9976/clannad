// 函数: sub_418fc0
// 地址: 0x418fc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_21c
int32_t eax_1 = __security_cookie ^ &var_21c
char const* const var_22c

if (arg1 == 0)
    int32_t eax_2
    int32_t ecx
    void* edx
    
    if (data_1321ebc != 0)
        ecx = data_1321eb8
        eax_2 = 0
        edx = data_1321ec0
    
    if (data_1321ebc != 0 && ecx s> 0)
        while (*(edx + 0x20) != arg2)
            eax_2 += 1
            edx += 0x3c
            
            if (eax_2 s>= ecx)
                goto label_419029
        
        void var_218
        sub_4cfd70(&var_218, edx)
        int32_t var_224_2 = arg2
        void* var_228_2 = &var_218
        goto label_418fe3
    
label_419029:
    int32_t var_224_1 = arg2
    int32_t var_228_1 = 0
    
    if (data_12dc4bc == 0)
        var_22c = "UnKnownName : Z[%04d]"
    else
        var_22c = "UnKnownName : Z[%05d]"
else
    int32_t var_224 = arg2
    int32_t var_228 = arg1
label_418fe3:
    
    if (data_12dc4bc == 0)
        var_22c = "%s : Z[%04d]"
    else
        var_22c = "%s : Z[%05d]"

char* result = sub_4c84d0(&data_7027c0, var_22c)

if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(result, data_72d6ac, data_719b6c, 0x613628, &data_7027c0), 
            data_72d6ac, data_719b6c, 0x613628, &data_7027c0), 
        data_72d6ac, data_719b6c, 0x613628, &data_7027c0)
    result = sub_4a1e40(3)

sub_5f02dd(eax_1 ^ &var_21c)
return result
