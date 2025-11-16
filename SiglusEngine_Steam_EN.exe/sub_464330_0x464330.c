// 函数: sub_464330
// 地址: 0x464330
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_21c
int32_t eax_1 = __security_cookie ^ &var_21c
char var_218
sub_4cfd70(&var_218, arg1)
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

if (sub_428990(&var_218, 1) == 0xffffffff)
    char* esi_2 = &var_218
    int32_t eax_5 = sub_4d1610(&var_218, 0x5c)
    
    if (eax_5 != 0xffffffff)
        esi_2 = &var_217 + eax_5
    
    int32_t eax_6 = sub_4d1610(esi_2, 0x2e)
    
    if (eax_6 == 0xffffffff)
        eax_6 = sub_4cfc80(esi_2)
        esi_2 -= 1
    
    void* const var_224_1 = &data_6141e4
    char* eax_7 = sub_4c84d0(&esi_2[eax_6], ".%s")
    int32_t esi_4 = data_703190:4
    int32_t eax_8 = sub_4c3da0(eax_7, 5, &var_218, 0x22)
    
    if (eax_8 != 1)
        void* eax_9
        
        if (esi_4 != 0xffffffff)
            eax_9 = sub_4c51f0(eax_8, &var_218, esi_4, nullptr)
        
        if (esi_4 == 0xffffffff || eax_9 == 0)
            char* esi_5 = &var_218
            int32_t eax_10 = sub_4d1610(&var_218, 0x5c)
            
            if (eax_10 != 0xffffffff)
                esi_5 = &var_217 + eax_10
            
            int32_t eax_11 = sub_4d1610(esi_5, 0x2e)
            
            if (eax_11 == 0xffffffff)
                eax_11 = sub_4cfc80(esi_5)
                esi_5 -= 1
            
            char* var_224_2 = &var_218
            esi_5[eax_11] = 0
            char* eax_12 = sub_4c84d0(&data_7027c0, "%s.gan ")
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_12, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
                sub_4a1e40(3)
                
                if (data_702fc0 != 0 || data_641ad0 s< 6)
                    MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                    data_641ad0 += 1
            else if (data_641ad0 s< 6)
                MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                data_641ad0 += 1
            
            sub_5f02dd(eax_1 ^ &var_21c)
            return 0

sub_5f02dd(eax_1 ^ &var_21c)
return 1
