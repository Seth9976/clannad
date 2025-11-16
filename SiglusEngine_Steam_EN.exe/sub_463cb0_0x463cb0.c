// 函数: sub_463cb0
// 地址: 0x463cb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_21c
int32_t eax_1 = __security_cookie ^ &var_21c
char var_218
sub_4cfd70(&var_218, arg3)
char* esi = &var_218
int32_t eax_2 = sub_4d1610(&var_218, 0x5c)
void var_217

if (eax_2 != 0xffffffff)
    esi = &var_217 + eax_2
int32_t eax_3 = sub_4d1610(esi, 0x2e)

if (eax_3 == 0xffffffff)
    eax_3 = sub_4cfc80(esi)
    esi -= 1

esi[eax_3] = 0
int32_t eax_4 = sub_482470(&var_218, 1)

if (eax_4 == 0xffffffff)
    if (sub_425810(eax_4, arg2, &var_218, 0, 1, 0) != 0xffffffff)
        sub_5f02dd(eax_1 ^ &var_21c)
        return 1
    
    uint32_t eax_7 = sub_418050()
    *arg4 = eax_7
    
    if (eax_7 != 0xffffffff)
        sub_5f02dd(eax_1 ^ &var_21c)
        return 7
    
    int32_t eax_9 = sub_4c3960(&var_218, 0x619c14)
    int32_t esi_2 = data_703180:8
    int32_t eax_10 = sub_4c3da0(eax_9, 5, &var_218, 0x1d)
    
    if (eax_10 != 1)
        void* eax_11
        
        if (esi_2 != 0xffffffff)
            eax_11 = sub_4c51f0(eax_10, &var_218, esi_2, nullptr)
        
        if (esi_2 == 0xffffffff || eax_11 == 0)
            if (sub_4c54e0(sub_4c3960(&var_218, &data_61334c), &var_218, data_703190:0xc, 5, 0xd)
                    == 0 &&
                    sub_4c54e0(sub_4c3960(&var_218, &data_613350), &var_218, data_703190:8, 5, 0x19) == 0)
                sub_4c3960(&var_218, 0)
                char* var_22c = &var_218
                char* eax_16 = sub_4c84d0(&data_7027c0, "%s.g00 ( pdt ) ( anm ) ( ")
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_16, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
                    sub_4a1e40(3)
                
                sub_446a50()
                sub_5f02dd(eax_1 ^ &var_21c)
                return 0
            
            sub_5f02dd(eax_1 ^ &var_21c)
            return 1

sub_5f02dd(eax_1 ^ &var_21c)
return 2
