// 函数: sub_5bdc80
// 地址: 0x5bdc80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb128
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 7
int32_t var_1c = 0
int32_t ebx = *(*(data_bac45c + 0x10) + 8)
int16_t var_2c = 0
sub_52e720(&var_2c, u"inc_prop", 8)
int32_t var_8_1 = 0
int32_t var_70 = 0
int32_t var_108 = ebx
int16_t* var_10c = &var_2c
void var_190
void var_ec
__builtin_memcpy(&var_190, &var_ec, 0x80)
int32_t* edi = arg1
sub_5be8a0(edi)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t eax_5 = 0
int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_48 = 0

if (ebx s> 0)
    int32_t ebx_1 = 0
    
    do
        int32_t esi_1 = eax_5 << 3
        *(ebx_1 + edi[0x29] + 4) = *(esi_1 + *(data_bac45c + 0x14))
        int32_t eax_10 = *(ebx_1 + edi[0x29] + 4)
        int32_t var_44
        int32_t var_30
        int32_t* esi_4
        
        if (eax_10 == 0xb)
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
            
            struct C_elm_list<int32_t>::C_elm_int_list::VTable** var_50 = esi_2
            int32_t var_4c_1 = 0
            int32_t var_8_3 = 1
            int32_t* var_64
            int32_t* eax_12 = sub_5bf3b0(&var_64, esi_2)
            int32_t* ecx_4 = *eax_12
            *eax_12 = var_4c_1
            int32_t* edi_1 = var_64
            
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
            
            struct C_elm_list<int32_t>::C_elm_int_list::VTable** var_100_4 = esi_2
            struct C_elm_list<int32_t>::C_elm_int_list::VTable** var_104_1 = esi_2
            struct C_elm_list<int32_t>::C_elm_int_list::VTable*** var_108_1 = &var_50
            int32_t var_8_4 = 2
            int16_t* eax_17 = sub_698470(&var_44, var_48)
            var_8_4.b = 3
            int32_t var_70_1 = 0
            int32_t ecx_10 = *(data_bac45c + 0x14)
            int32_t var_100_6 = ecx_10
            int32_t var_104_3 = 1
            int32_t var_108_2 = *(ecx_10 + esi_1 + 4)
            int16_t* var_10c_1 = eax_17
            __builtin_memcpy(&var_190, &var_ec, 0x80)
            sub_5c3640(var_50)
            var_8_4.b = 2
            
            if (var_30 u>= 8)
                j__free(var_44)
            
            edi = arg1
            int32_t esi_3 = edi[0x29]
            struct boost::any::placeholder::boost::any::holder<class boost::shared_ptr<class C_elm_int_list> >::VTable
                ** edx_3 = sub_745f3f(0xc)
            
            if (edx_3 == 0)
                edx_3 = nullptr
            else
                *edx_3 = &boost::any::holder<class boost::shared_ptr<class C_elm_int_list> >::`vftable'{for `boost::any::placeholder'}
                edx_3[1] = var_50
                edx_3[2] = ecx_4
                
                if (ecx_4 != 0)
                    ecx_4[1]
                    ecx_4[1] += 1
            
            int32_t* ecx_14 = *(esi_3 + ebx_1 + 0x160)
            *(esi_3 + ebx_1 + 0x160) = edx_3
            
            if (ecx_14 != 0)
                (**ecx_14)(1)
            
            int32_t var_8_5 = 0xffffffff
            esi_4 = ecx_4
        label_5be01d:
            
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
        else if (eax_10 == 0x15)
            struct C_elm_list<class NT3::basic_string_ex<wchar_t> >::C_elm_str_list::VTable** eax_23
            struct C_elm_list<class NT3::basic_string_ex<wchar_t> >::C_elm_str_list::VTable** ecx_15
            eax_23, ecx_15 = sub_745f3f(0xb8)
            struct C_elm_list<class NT3::basic_string_ex<wchar_t> >::C_elm_str_list::VTable** eax_24
            
            if (eax_23 == 0)
                eax_24 = nullptr
            else
                ecx_15 = eax_23
                eax_24 = sub_5b7840(ecx_15)
            
            int32_t* var_54 = nullptr
            int32_t var_8_6 = 4
            int32_t** var_100_11 = &var_54
            sub_5bf210(eax_24, eax_24, ecx_15)
            int32_t var_8_7 = 5
            int16_t* eax_25 = sub_698470(&var_44, var_48)
            var_8_7.b = 6
            int32_t var_70_2 = 0
            int32_t ecx_17 = *(data_bac45c + 0x14)
            int32_t var_100_13 = ecx_17
            int32_t var_104_5 = 1
            int32_t var_108_3 = *(ecx_17 + esi_1 + 4)
            int16_t* var_10c_2 = eax_25
            __builtin_memcpy(&var_190, &var_ec, 0x80)
            sub_5c36c0(eax_24)
            var_8_7.b = 5
            
            if (var_30 u>= 8)
                j__free(var_44)
            
            edi = arg1
            int32_t esi_5 = edi[0x29]
            struct boost::any::placeholder::boost::any::holder<class boost::shared_ptr<class C_elm_str_list> >::VTable
                ** edx_5 = sub_745f3f(0xc)
            
            if (edx_5 == 0)
                edx_5 = nullptr
            else
                *edx_5 = &boost::any::holder<class boost::shared_ptr<class C_elm_str_list> >::`vftable'{for `boost::any::placeholder'}
                edx_5[1] = eax_24
                edx_5[2] = var_54
                int32_t* eax_28 = var_54
                
                if (eax_28 != 0)
                    eax_28[1]
                    eax_28[1] += 1
            
            int32_t* ecx_21 = *(esi_5 + ebx_1 + 0x160)
            *(esi_5 + ebx_1 + 0x160) = edx_5
            
            if (ecx_21 != 0)
                (**ecx_21)(1)
            
            int32_t var_8_8 = 0xffffffff
            esi_4 = var_54
            goto label_5be01d
        ebx_1 += 0x164
        eax_5 = var_48 + 1
        var_48 = eax_5
    while (eax_5 s< ebx)

int32_t result = sub_5be920(edi)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
