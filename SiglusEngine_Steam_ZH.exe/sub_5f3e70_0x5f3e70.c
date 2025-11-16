// 函数: sub_5f3e70
// 地址: 0x5f3e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_WPADI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_8c
int16_t* eax_3 = sub_6106b0(&var_8c, arg1 + 0xd74)
int32_t var_8_1 = 0
int32_t var_7c
int32_t var_74
int16_t var_44
int32_t var_30

if (var_7c == 0)
    int16_t* eax_4 = sub_548cb0(eax_3, 0xaf286c, &var_74, arg1 + 0xd74)
    var_8_1.b = 1
    int16_t* eax_5 = sub_532b80(eax_4, eax_4, &var_44, 
        &boost::detail::sp_counted_impl_p<class C_tnm_sprite>::`vftable'{for `boost::detail::sp_counted_base'}
            .vFunc_5)
    var_8_1.b = 2
    sub_684160(data_bac424, 2, eax_5)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34 = 0
    var_44 = 0
    goto label_5f40b0

int32_t* eax_6
int32_t* ecx_4
eax_6, ecx_4 = sub_745f3f(8)
bool var_ac_1 = eax_6.b
var_8_1.b = 3
int32_t* eax_7

if (eax_6 == 0)
    eax_7 = nullptr
else
    eax_7, ecx_4 = sub_6de040(eax_6)

int32_t* var_1c_1 = eax_7
int32_t* var_18 = nullptr
var_8_1.b = 4
int32_t* var_c8_3 = &var_18
sub_5f4770(eax_7, eax_7, ecx_4)
var_8_1.b = 5
uint128_t var_24
int32_t ecx_7 = sub_54d190(arg1 + 0x15e0, &var_24:8)
var_8_1.b = 0
int32_t* esi = var_18

if (esi != 0)
    bool cond:1_1 = esi[1] != 1
    ecx_7 = esi[1]
    esi[1] -= 1
    
    if (not(cond:1_1))
        ecx_7 = (*(*esi + 4))(eax_2)
        bool cond:2_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            ecx_7 = (*(*esi + 8))()

int32_t var_c8_5 = ecx_7
void** ebx
int32_t var_60
int16_t var_5c
int32_t var_48
int16_t var_2c

if (sub_6e2930(**(arg1 + 0x15e0), &var_8c, *(arg1 + 0x268) != 0) != 0)
    int32_t var_30_3 = 7
    void* eax_20 = **(arg1 + 0x15e0)
    int32_t var_34_2 = 0
    var_24 = *(eax_20 + 0xc4)
    int32_t eax_21 = *(eax_20 + 0xdc)
    int64_t var_98_1 = *(eax_20 + 0xd4)
    var_44 = 0
    sub_52e720(&var_44, 0xaf322c, 0xd)
    var_8_1.b = 0xa
    uint128_t xmm1_1 = var_24
    int32_t* var_b4
    sub_6a1200(&var_b4, &var_44, _mm_bsrli_si128(xmm1_1, 4), _mm_bsrli_si128(xmm1_1, 8), 1, 0x200, 
        0x15, 0, 1)
    var_8_1.b = 0xc
    
    if (var_30_3 u>= 8)
        j__free(var_44.d)
    
    int32_t* ecx_18 = var_b4
    int32_t var_30_4 = 7
    int32_t var_34_3 = 0
    var_44 = 0
    int32_t* var_b0
    
    if (ecx_18 != 0)
        int32_t var_ac_2 = 0
        sub_6f3d50(ecx_18, 0, eax_2.b, arg3.b, arg2.b)
        int32_t* eax_29
        int32_t* ecx_25
        eax_29, ecx_25 = sub_745f3f(0xc)
        
        if (eax_29 == 0)
            eax_29 = nullptr
        else
            *eax_29 = 0
            eax_29[1] = 0
            eax_29[2] = 0
        
        int32_t* var_1c_4 = eax_29
        var_18 = nullptr
        var_8_1.b = 0x11
        int32_t** var_c8_22 = &var_18
        sub_5f2040(eax_29, eax_29, ecx_25)
        var_8_1.b = 0x12
        sub_54d190(arg1 + 0x1568, &var_24:8)
        var_8_1.b = 0xc
        sub_54b010(&var_24:8)
        int32_t* eax_30 = var_b4
        int32_t* var_c8_24 = var_b0
        
        if (var_b0 != 0)
            var_b0[1]
            var_b0[1] += 1
        
        *(arg1 + 0x1568)
        std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Move_assign(
            eax_30)
        ebx.b = 1
    else
        int32_t var_a4
        void** eax_24 = sub_6b9ed0(&var_a4)
        var_8_1.b = 0xd
        int16_t* eax_26 = sub_548cb0(arg1 + 0xd74, 0xaf3214, &var_74, arg1 + 0xd74)
        var_8_1.b = 0xe
        int16_t* eax_27 = sub_532b80(eax_26, eax_26, &var_2c, 0xaf31f8)
        var_8_1.b = 0xf
        int16_t* eax_28 = sub_5327a0(eax_27, eax_27, &var_5c, eax_24)
        var_8_1.b = 0x10
        sub_684160(data_bac424, 2, eax_28)
        
        if (var_48 u>= 8)
            j__free(var_5c.d)
        
        int32_t var_48_2 = 7
        bool cond:5_1 = var_18 u< 8
        int32_t var_4c_2 = 0
        var_5c = 0
        
        if (not(cond:5_1))
            j__free(var_2c.d)
        
        var_18 = 7
        int32_t var_1c_3 = 0
        var_2c = 0
        
        if (var_60 u>= 8)
            j__free(var_74)
        
        var_8_1.b = 0xc
        int32_t var_60_1 = 7
        int32_t var_64_1 = 0
        var_74.w = 0
        
        if (eax_21 u>= 8)
            j__free(var_a4)
        
        sub_5e5060(arg1, 1)
        ebx.b = 0
    
    var_8_1.b = 0
    
    if (var_b0 != 0)
        bool cond:7_1 = var_b0[1] != 1
        var_b0[1]
        var_b0[1] -= 1
        
        if (not(cond:7_1))
            (*(*var_b0 + 4))(eax_2, arg3, arg2)
            int32_t edi_1 = var_b0[2]
            var_b0[2] -= 1
            
            if (edi_1 == 1)
                (*(*var_b0 + 8))()
else
    int16_t* eax_14 = sub_6de0c0(*(arg1 + 0x15e0), &var_74)
    var_8_1.b = 6
    int16_t* eax_16 = sub_548cb0(arg1 + 0xd74, 0xaf3214, &var_5c, arg1 + 0xd74)
    var_8_1.b = 7
    int16_t* eax_17 = sub_532b80(eax_16, eax_16, &var_2c, 0xaf31f8)
    var_8_1.b = 8
    int16_t* eax_18 = sub_5327a0(eax_17, eax_17, &var_44, eax_14)
    var_8_1.b = 9
    sub_684160(data_bac424, 2, eax_18)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_2 = 7
    bool cond:3_1 = var_18 u< 8
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (not(cond:3_1))
        j__free(var_2c.d)
    
    var_18 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
label_5f40b0:
    var_8_1.b = 0
    
    if (var_60 u>= 8)
        j__free(var_74)
    
    sub_5e5060(arg1, 1)
    ebx.b = 0
int32_t var_78

if (var_78 u>= 8)
    j__free(var_8c)

int16_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
