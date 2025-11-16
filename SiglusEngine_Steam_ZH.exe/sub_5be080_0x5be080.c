// 函数: sub_5be080
// 地址: 0x5be080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2 * 0x54
int32_t var_1c = 7
int32_t var_20 = 0
int32_t ebx = *(*(*(data_bac45c + 0x54) + ecx + 4) + 0x38)
int16_t var_30 = 0
sub_52e720(&var_30, u"scn_prop", 8)
int32_t var_8_1 = 0
int32_t var_7c = 0
int32_t var_114 = ebx
int16_t* var_118 = &var_30
void var_19c
void var_f8
__builtin_memcpy(&var_19c, &var_f8, 0x80)
int32_t* edi = arg1
sub_5be8a0(edi)
int32_t var_8_2 = 0xffffffff

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t eax_7 = 0
int32_t var_1c_1 = 7
int32_t var_20_1 = 0
var_30 = 0
int32_t var_4c = 0

if (ebx s> 0)
    int32_t ebx_1 = 0
    
    do
        int32_t esi_1 = eax_7 << 3
        *(ebx_1 + edi[0x29] + 4) = *(esi_1 + *(*(data_bac45c + 0x54) + ecx + 0x1c))
        int32_t eax_13 = *(ebx_1 + edi[0x29] + 4)
        int32_t var_48
        int32_t var_34
        int32_t* esi_4
        
        if (eax_13 == 0xb)
            struct C_elm_list<int32_t>::C_elm_int_list::VTable** esi_2 = sub_745f3f(0xb8)
            
            if (esi_2 == 0)
                esi_2 = nullptr
            else
                esi_2[0x20] = 0
                esi_2[0x27] = 7
                esi_2[0x26] = 0
                esi_2[0x22].w = 0
                esi_2[0x29] = 0
                esi_2[0x2a] = 0
                esi_2[0x2b] = 0
                esi_2[0x2c] = 0
                esi_2[0x2d].b = 1
                *esi_2 = &C_elm_int_list::`vftable'{for `C_elm_list<int32_t>'}
            
            struct C_elm_list<int32_t>::C_elm_int_list::VTable** var_54 = esi_2
            int32_t var_50_1 = 0
            int32_t var_8_3 = 1
            int32_t* var_74
            int32_t* eax_15 = sub_5bf3b0(&var_74, esi_2)
            int32_t* ecx_6 = *eax_15
            *eax_15 = var_50_1
            int32_t* edi_1 = var_74
            
            if (edi_1 != 0)
                bool cond:0_1 = edi_1[1] != 1
                edi_1[1]
                edi_1[1] -= 1
                
                if (not(cond:0_1))
                    (*(*edi_1 + 4))(eax_2)
                    bool cond:1_1 = edi_1[2] != 1
                    edi_1[2]
                    edi_1[2] -= 1
                    
                    if (not(cond:1_1))
                        (*(*edi_1 + 8))()
            
            struct C_elm_list<int32_t>::C_elm_int_list::VTable** var_10c_4 = esi_2
            struct C_elm_list<int32_t>::C_elm_int_list::VTable** var_110_1 = esi_2
            struct C_elm_list<int32_t>::C_elm_int_list::VTable*** var_114_1 = &var_54
            int32_t var_8_4 = 2
            int16_t* eax_20 = sub_6984d0(&var_48, arg2, var_4c)
            var_8_4.b = 3
            int32_t var_7c_1 = 0
            int32_t ecx_13 = *(*(data_bac45c + 0x54) + ecx + 0x1c)
            int32_t var_10c_6 = ecx_13
            int32_t var_110_3 = 1
            int32_t var_114_3 = *(ecx_13 + esi_1 + 4)
            int16_t* var_118_1 = eax_20
            __builtin_memcpy(&var_19c, &var_f8, 0x80)
            sub_5c3640(var_54)
            var_8_4.b = 2
            
            if (var_34 u>= 8)
                j__free(var_48)
            
            edi = arg1
            int32_t esi_3 = edi[0x29]
            struct boost::any::placeholder::boost::any::holder<class boost::shared_ptr<class C_elm_int_list> >::VTable
                ** edx_4 = sub_745f3f(0xc)
            
            if (edx_4 == 0)
                edx_4 = nullptr
            else
                *edx_4 = &boost::any::holder<class boost::shared_ptr<class C_elm_int_list> >::`vftable'{for `boost::any::placeholder'}
                edx_4[1] = var_54
                edx_4[2] = ecx_6
                
                if (ecx_6 != 0)
                    ecx_6[1]
                    ecx_6[1] += 1
            
            int32_t* ecx_17 = *(esi_3 + ebx_1 + 0x160)
            *(esi_3 + ebx_1 + 0x160) = edx_4
            
            if (ecx_17 != 0)
                (**ecx_17)(1)
            
            int32_t var_8_5 = 0xffffffff
            esi_4 = ecx_6
        label_5be448:
            
            if (esi_4 != 0)
                bool cond:2_1 = esi_4[1] != 1
                esi_4[1]
                esi_4[1] -= 1
                
                if (not(cond:2_1))
                    (*(*esi_4 + 4))(eax_2)
                    bool cond:3_1 = esi_4[2] != 1
                    esi_4[2]
                    esi_4[2] -= 1
                    
                    if (not(cond:3_1))
                        (*(*esi_4 + 8))()
        else if (eax_13 == 0x15)
            struct C_elm_list<class NT3::basic_string_ex<wchar_t> >::C_elm_str_list::VTable** eax_26
            struct C_elm_list<class NT3::basic_string_ex<wchar_t> >::C_elm_str_list::VTable** ecx_18
            eax_26, ecx_18 = sub_745f3f(0xb8)
            struct C_elm_list<class NT3::basic_string_ex<wchar_t> >::C_elm_str_list::VTable** eax_27
            
            if (eax_26 == 0)
                eax_27 = nullptr
            else
                ecx_18 = eax_26
                eax_27 = sub_5b7840(ecx_18)
            
            int32_t* var_58 = nullptr
            int32_t var_8_6 = 4
            int32_t** var_10c_11 = &var_58
            sub_5bf210(eax_27, eax_27, ecx_18)
            int32_t var_8_7 = 5
            int16_t* eax_28 = sub_6984d0(&var_48, arg2, var_4c)
            var_8_7.b = 6
            int32_t var_7c_2 = 0
            int32_t ecx_21 = *(*(data_bac45c + 0x54) + ecx + 0x1c)
            int32_t var_10c_13 = ecx_21
            int32_t var_110_5 = 1
            int32_t var_114_5 = *(ecx_21 + esi_1 + 4)
            int16_t* var_118_2 = eax_28
            __builtin_memcpy(&var_19c, &var_f8, 0x80)
            sub_5c36c0(eax_27)
            var_8_7.b = 5
            
            if (var_34 u>= 8)
                j__free(var_48)
            
            edi = arg1
            int32_t esi_5 = edi[0x29]
            struct boost::any::placeholder::boost::any::holder<class boost::shared_ptr<class C_elm_str_list> >::VTable
                ** edx_7 = sub_745f3f(0xc)
            
            if (edx_7 == 0)
                edx_7 = nullptr
            else
                *edx_7 = &boost::any::holder<class boost::shared_ptr<class C_elm_str_list> >::`vftable'{for `boost::any::placeholder'}
                edx_7[1] = eax_27
                edx_7[2] = var_58
                int32_t* eax_31 = var_58
                
                if (eax_31 != 0)
                    eax_31[1]
                    eax_31[1] += 1
            
            int32_t* ecx_25 = *(esi_5 + ebx_1 + 0x160)
            *(esi_5 + ebx_1 + 0x160) = edx_7
            
            if (ecx_25 != 0)
                (**ecx_25)(1)
            
            int32_t var_8_8 = 0xffffffff
            esi_4 = var_58
            goto label_5be448
        ebx_1 += 0x164
        eax_7 = var_4c + 1
        var_4c = eax_7
    while (eax_7 s< ebx)

int32_t result = sub_5be920(edi)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
