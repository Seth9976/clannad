// 函数: sub_4a2390
// 地址: 0x4a2390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t eax_2 = zx.d(arg2)
char const* const var_740
void var_27c
int32_t edi_1

if (eax_2 == 0)
    int32_t esi_8 = arg1 s/ 0x2710
    int32_t var_720_2 = esi_8
    edi_1 = arg1 s% 0x2710
    sub_4c84d0(&var_27c, "Z%03d.koe")
    int32_t var_72c_2 = edi_1
    int32_t var_730_2 = esi_8
    int32_t var_734_2 = esi_8
    int32_t var_738_2 = 0x134e310
    char* var_73c_2 = &data_1352208
    var_740 = "%s\%s\%03d\Z%03d%04d"
else if (eax_2 == 1)
    int32_t esi_5 = arg1 s/ 0x186a0
    int32_t var_720_1 = esi_5
    edi_1 = arg1 s% 0x186a0
    sub_4c84d0(&var_27c, "Z%03d.koe")
    int32_t var_72c_1 = edi_1
    int32_t var_730_1 = esi_5
    int32_t var_734_1 = esi_5
    int32_t var_738_1 = 0x134e310
    char* var_73c_1 = &data_1352208
    var_740 = "%s\%s\%03d\Z%03d%05d"
else
    int32_t esi_2 = arg1 s/ 0x186a0
    int32_t var_720 = esi_2
    edi_1 = arg1 s% 0x186a0
    sub_4c84d0(&var_27c, "Z%04d.koe")
    int32_t var_72c = edi_1
    int32_t var_730 = esi_2
    int32_t var_734 = esi_2
    int32_t var_738 = 0x134e310
    char* var_73c = &data_1352208
    var_740 = "%s\%s\%04d\Z%04d%05d"

void var_70c
sub_4c84d0(&var_70c, var_740)
char var_214
void var_213

if (data_108fe40 == 1)
label_4a255c:
    void* var_720_4 = &var_27c
    int32_t var_724_1 = 0x134e310
    char* var_728_4 = &data_1352618
    sub_4c84d0(&var_214, "%s\%s\%s")
    char* esi_11 = &var_214
    int32_t eax_19 = sub_4d1610(&var_214, 0x5c)
    
    if (eax_19 != 0xffffffff)
        esi_11 = &var_213 + eax_19
    
    int32_t eax_20 = sub_4d1610(esi_11, 0x2e)
    
    if (eax_20 == 0xffffffff)
        eax_20 = sub_4cfc80(esi_11)
        esi_11 -= 1
    
    void* const var_720_5 = &data_61b800
    sub_4c84d0(&esi_11[eax_20], ".%s")
    int32_t var_714
    void* var_710
    
    if (sub_4c9960(&var_710, 0, &var_214, &var_710, &var_714) != 0)
        int32_t edx_9 = var_714
        int32_t ecx_15 = 0
        
        if (edx_9 s> 0)
            int32_t* eax_24 = var_710 + 8
            
            do
                if (*eax_24 == edi_1)
                    goto label_4a24fd
                
                ecx_15 += 1
                eax_24 = &eax_24[4]
            while (ecx_15 s< edx_9)
    
    sub_4c3960(&var_214, &data_61b804)
    
    if (sub_4c9810(edi_1) == 0)
        sub_4c3960(&var_214, &data_61b808)
        
        if (sub_4c94a0(edi_1) == 0)
            sub_4cfd70(&var_214, &var_27c)
            int32_t eax_27 = sub_4c3960(&var_214, &data_61b800)
            int32_t esi_13 = data_7031b0
            
            if (esi_13 == 0xffffffff)
                goto label_4a26ef
            
            if (sub_4c51f0(eax_27, &var_214, esi_13, nullptr) == 0)
                goto label_4a26ef
            
            void var_504
            sub_4c5550(&var_504, &var_214, esi_13, 7, &var_504, &var_714, &var_710)
            
            if (sub_4c9b00(edi_1) == 0)
                esi_13 = data_7031b0
            label_4a26ef:
                int32_t eax_31 = sub_4c3960(&var_214, &data_61b804)
                
                if (esi_13 == 0xffffffff)
                    goto label_4a2761
                
                if (sub_4c51f0(eax_31, &var_214, esi_13, nullptr) == 0)
                    goto label_4a2761
                
                sub_4c5550(&var_504, &var_214, esi_13, 7, &var_504, &var_714, &var_710)
                
                if (sub_4c9810(edi_1) == 0)
                    esi_13 = data_7031b0
                label_4a2761:
                    int32_t eax_35 = sub_4c3960(&var_214, &data_61b808)
                    
                    if (esi_13 == 0xffffffff)
                        sub_5f02dd(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    if (sub_4c51f0(eax_35, &var_214, esi_13, nullptr) == 0)
                        sub_5f02dd(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    sub_4c5550(&var_504, &var_214, esi_13, 7, &var_504, &var_714, &var_710)
                    
                    if (sub_4c94a0(edi_1) == 0)
                        sub_5f02dd(eax_1 ^ &__saved_ebp)
                        return 0
else
    sub_4cfd70(&var_214, &var_70c)
    char* esi_9 = &var_214
    int32_t eax_10 = sub_4d1610(&var_214, 0x5c)
    
    if (eax_10 != 0xffffffff)
        esi_9 = &var_213 + eax_10
    
    int32_t eax_11 = sub_4d1610(esi_9, 0x2e)
    
    if (eax_11 == 0xffffffff)
        eax_11 = sub_4cfc80(esi_9)
        esi_9 -= 1
    
    void* const var_720_3 = &data_617380
    
    if (sub_4c3da0(sub_4c84d0(&esi_9[eax_11], ".%s"), 0xffffffff, &var_214, 0xffffffff) != 1
            && sub_4c3da0(sub_4c3960(&var_214, &data_61737c), 0xffffffff, &var_214, 0xffffffff)
            != 1 && sub_4c3da0(sub_4c3960(&var_214, &data_617384), 0xffffffff, &var_214, 0xffffffff) != 1)
        goto label_4a255c
label_4a24fd:
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
