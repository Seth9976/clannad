// 函数: sub_6182e0
// 地址: 0x6182e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf747
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_1a8 = 0
int32_t var_1a4 = 0
int32_t var_1b0 = 0
int32_t* var_18c = nullptr
int32_t var_1ac = 0
var_8_1.b = 2
void* eax_3 = data_bac4a0
int32_t edx = *(arg1 + 0x1bc8)
int32_t* esi_1 = *(arg1 + 0x1bcc)
int32_t var_180 = edx
int32_t ebx = *(eax_3 + 0x1c4)
int32_t edi = *(eax_3 + 0x1c8)

if (esi_1 != 0)
    esi_1[1]
    esi_1[1] += 1

void* var_1d8 = 7
int32_t var_1c0 = edx
void* const var_1dc = &data_aef37c
int32_t* var_1bc = esi_1
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, var_1dc, var_1d8)
char var_1d8_1 = 1
int32_t var_1dc_1 = 0
int32_t var_1e0 = 0x16
int32_t var_1e4 = 0x401
int32_t var_1e8 = 0
var_8_1.b = 3
int16_t* var_1f4 = &var_2c
int32_t var_34
int32_t* var_1f8 = &var_34
void** eax_5 =
    sub_6a1200(var_1f8, var_1f4, ebx, edi, var_1e8, var_1e4, var_1e0, var_1dc_1, var_1d8_1)
int32_t* edx_1 = *eax_5
int32_t* ecx_2 = eax_5[1]
eax_5[1] = 0
*eax_5 = nullptr
var_8_1.b = 3
int32_t* var_1a8_1 = edx_1
int32_t* var_1a4_1 = ecx_2
int32_t* var_30

if (var_30 != 0)
    bool cond:0_1 = var_30[1] != 1
    var_30[1]
    var_30[1] -= 1
    
    if (not(cond:0_1))
        (*(*var_30 + 4))(eax_2)
        bool cond:1_1 = var_30[2] != 1
        var_30[2]
        var_30[2] -= 1
        
        if (not(cond:1_1))
            (*(*var_30 + 8))()

var_8_1.b = 2

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t* ebx_1
int32_t var_5c
int32_t var_48
int16_t var_44
int16_t* eax_12

if (edx_1 != 0)
    void* var_1d8_4 = 7
    var_18 = 7
    void* const var_1dc_3 = &data_aef37c
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_1d8_5 = sub_52e720(&var_2c, var_1dc_3, var_1d8_4)
    var_8_1.b = 8
    int32_t*** eax_13 = sub_6a3730(&var_34, &var_2c, ebx, edi)
    int32_t** edx_4 = *eax_13
    int32_t* ecx_11 = eax_13[1]
    eax_13[1] = 0
    *eax_13 = nullptr
    var_8_1.b = 8
    var_18c = ecx_11
    int32_t** var_1b0_1 = edx_4
    int32_t* var_1ac_1 = ecx_11
    
    if (var_30 != 0)
        bool cond:2_1 = var_30[1] != 1
        var_30[1]
        var_30[1] -= 1
        
        if (not(cond:2_1))
            (*(*var_30 + 4))(eax_2)
            bool cond:3_1 = var_30[2] != 1
            var_30[2]
            var_30[2] -= 1
            
            if (not(cond:3_1))
                (*(*var_30 + 8))()
    
    var_8_1.b = 2
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    if (edx_4 == 0)
        void** eax_18 = sub_6b9ed0(&var_5c)
        int32_t var_1dc_5 = edi
        var_8_1.b = 0xa
        int32_t var_1e0_3 = ebx
        sub_52e820(&var_1f8, 0xaf3f68)
        void** eax_19 = sub_6ae4c0(&var_44, var_1f8)
        var_8_1.b = 0xb
        eax_12 = sub_5327a0(eax_19, eax_19, &var_2c, eax_18)
        var_8_1.b = 0xc
        goto label_6185b1
    
    int32_t var_17c
    sub_6efae0(&var_17c)
    var_8_1.b = 0xd
    int32_t var_3c_1 = 0
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(ebx))
    int32_t var_38_1 = 0
    var_17c = 2
    int16_t var_178_1 = 0x101
    int16_t var_171_1 = 0
    char var_174_1 = 1
    var_34 = xmm0_2
    int32_t eax_20 = var_34
    int32_t xmm0_4 = _mm_cvtepi32_ps(zx.o(edi))
    int32_t var_16c_1 = eax_20
    var_34 = ebx
    int32_t var_30_3 = edi
    int32_t var_168_1 = xmm0_4
    int32_t eax_22 = data_4ebe2d4
    int128_t var_120_1 = var_3c_1.o
    int32_t* eax_23 = data_4ebe2d8
    
    if (eax_23 != 0)
        eax_23[1]
        eax_23[1] += 1
    
    operator new(&var_17c, eax_22, eax_23)
    int32_t eax_25 = data_4ebe2ec
    int32_t* eax_26 = data_4ebe2f0
    
    if (eax_26 != 0)
        eax_26[1]
        eax_26[1] += 1
    
    operator new[](&var_17c, eax_25, eax_26)
    var_34 = var_180
    int32_t* var_30_4 = esi_1
    
    if (esi_1 != 0)
        esi_1[1]
        esi_1[1] += 1
    
    var_8_1.b = 0xe
    void var_a4
    int32_t ecx_26 = sub_5b17d0(&var_a4, &var_34)
    var_8_1.b = 0xd
    
    if (esi_1 != 0)
        bool cond:7_1 = esi_1[1] != 1
        ecx_26 = esi_1[1]
        esi_1[1] -= 1
        
        if (not(cond:7_1))
            (*(*esi_1 + 4))(eax_2)
            bool cond:10_1 = esi_1[2] != 1
            ecx_26 = esi_1[2]
            esi_1[2] -= 1
            
            if (not(cond:10_1))
                ecx_26 = (*(*esi_1 + 8))()
    
    int32_t var_1d8_15 = ecx_26
    int32_t var_1a0
    int32_t* var_1dc_9 = &var_1a0
    float ecx_30 = sub_6fd020(data_4ebe2d4, ecx_26, 0)
    int32_t var_1d8_16 = 0
    int32_t var_1dc_10 = 0
    int32_t var_1e0_5 = var_1a0
    char eax_34 = sub_6f01c0(&var_17c, 0, ecx_30, 0)
    int32_t* ecx_32 = data_4ebe2d4
    int32_t* var_28
    
    if (eax_34 == 0)
        sub_6fd140(ecx_32)
    label_618872:
        void* var_1d8_26 = 5
        int32_t var_30_6 = 7
        void* const var_1dc_12 = &data_aef38c
        var_34 = 0
        var_44 = 0
        sub_52e720(&var_44, var_1dc_12, var_1d8_26)
        char var_1d8_27 = 0
        int32_t var_1dc_13 = 2
        int32_t var_1e0_6 = 0x16
        int32_t var_1e4_3 = 0
        int32_t var_1e8_2 = 0
        var_8_1.b = 0x11
        void** var_1f4_2 = &var_44
        int32_t* var_1b8
        var_1f8 = &var_1b8
        sub_6a1200(var_1f8, var_1f4_2, ebx, edi, var_1e8_2, var_1e4_3, var_1e0_6, var_1dc_13, 
            var_1d8_27)
        var_8_1.b = 0x13
        
        if (var_30_6 u>= 8)
            j__free(var_44.d)
        
        int32_t* ecx_43 = var_1b8
        int32_t var_30_7 = 7
        var_34 = 0
        var_44 = 0
        
        if (ecx_43 != 0)
            int32_t* var_1d8_33 = ecx_43
            int32_t* eax_48
            int32_t ecx_47
            eax_48, ecx_47 = sub_6f3910(ecx_43, &var_28)
            var_8_1.b = 0x16
            int32_t var_1d8_34 = *eax_48
            bool cond:13_1 = sub_6f39a0(edx_1, ecx_47) == 0
            var_8_1.b = 0x13
            int32_t* ecx_49 = var_28
            ebx_1.b = cond:13_1
            
            if (ecx_49 != 0)
                (*(*ecx_49 + 8))(ecx_49)
            
            if (ebx_1.b == 0)
                sub_5b17d0(arg1 + 0x1c08, &var_1b8)
                void* var_1d8_39 = 0xe
                int32_t var_18_3 = 7
                void* const var_1dc_18 = &data_af407c
                int32_t var_1c_4 = 0
                var_2c = 0
                sub_52e720(&var_2c, var_1dc_18, var_1d8_39)
                var_8_1.b = 0x19
                sub_684160(data_bac424, 5, &var_2c)
                sub_52e8a0(&var_2c)
                ebx_1.b = 1
            else
                int16_t* eax_51 = sub_6b9ed0(&var_2c)
                var_8_1.b = 0x17
                int16_t* eax_52 = sub_548cb0(eax_51, 0xaf3ff0, &var_5c, eax_51)
                var_8_1.b = 0x18
                sub_684160(data_bac424, 2, eax_52)
                sub_52e8a0(&var_5c)
                sub_52e8a0(&var_2c)
                ebx_1.b = 0
        else
            int16_t* eax_46 = sub_6b9ed0(&var_5c)
            var_8_1.b = 0x14
            int16_t* eax_47 = sub_548cb0(eax_46, 0xaf3fbc, &var_2c, eax_46)
            var_8_1.b = 0x15
            sub_684160(data_bac424, 2, eax_47)
            
            if (var_18 u>= 8)
                j__free(var_2c.d)
            
            int32_t var_18_2 = 7
            int32_t var_1c_3 = 0
            var_2c = 0
            
            if (var_48 u< 8)
                ebx_1.b = 0
            else
                j__free(var_5c)
                ebx_1.b = 0
        
        var_8_1.b = 0xd
        int32_t var_1b4
        var_180 = var_1b4
        
        if (var_1b4 != 0)
            bool cond:15_1 = *(var_1b4 + 4) != 1
            *(var_1b4 + 4)
            *(var_1b4 + 4) -= 1
            
            if (not(cond:15_1))
                (*(*var_1b4 + 4))(eax_2)
                int32_t ecx_62 = var_180
                bool cond:16_1 = *(ecx_62 + 8) != 1
                *(ecx_62 + 8)
                *(ecx_62 + 8) -= 1
                
                if (not(cond:16_1))
                    (*(*ecx_62 + 8))()
    else
        int32_t var_1d8_17 = sub_6fd140(ecx_32)
        sub_6f3910(edx_1, &var_28)
        var_8_1.b = 0xf
        int32_t** ecx_35 = edx_4
        ebx_1 = *ecx_35
        int32_t* var_40_1 = ebx_1
        
        if (ebx_1 != 0)
            (*(*ebx_1 + 4))(ebx_1)
            ecx_35 = edx_4
        
        int32_t var_3c_2 = ecx_35[1]
        int32_t var_38_2 = ecx_35[2]
        var_34 = ecx_35[3]
        int32_t var_30_5 = ecx_35[4]
        var_8_1.b = 0x10
        sub_6f5d30(var_28)
        sub_6f5e50(ebx_1)
        *(arg1 + 0x1adc) = *(arg1 + 0x1ad8)
        var_180 = &var_17c
        sub_530ba0(arg1 + 0x1ad8, &var_180)
        var_8_1.b = 0xf
        
        if (sub_6f6480(arg1 + 0x90) != 0)
            if (ebx_1 != 0)
                (*(*ebx_1 + 8))(ebx_1)
            
            var_8_1.b = 0xd
            int32_t* ecx_41 = var_28
            
            if (ecx_41 != 0)
                (*(*ecx_41 + 8))(ecx_41)
            
            goto label_618872
        
        if (ebx_1 != 0)
            (*(*ebx_1 + 8))(ebx_1)
        
        var_8_1.b = 0xd
        int32_t* ecx_40 = var_28
        
        if (ecx_40 != 0)
            (*(*ecx_40 + 8))(ecx_40)
        
        ebx_1.b = 0
    var_8_1.b = 2
    sub_6efc80(&var_17c)
else
    int16_t* eax_10 = sub_6b9ed0(&var_5c)
    int32_t var_1dc_2 = edi
    var_8_1.b = 5
    int32_t var_1e0_1 = ebx
    sub_52e820(&var_1f8, 0xaf3f20)
    int16_t* eax_11 = sub_6ae4c0(&var_44, var_1f8)
    var_8_1.b = 6
    eax_12 = sub_5327a0(eax_11, eax_11, &var_2c, eax_10)
    var_8_1.b = 7
label_6185b1:
    sub_684160(data_bac424, 2, eax_12)
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    var_2c = 0
    int32_t var_1c_2 = 0
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    var_44 = 0
    var_34 = 0
    
    if (var_48 u>= 8)
        j__free(var_5c)
    
    ebx_1.b = 0
var_8_1.b = 1

if (var_18c != 0)
    bool cond:6_1 = var_18c[1] != 1
    var_18c[1]
    var_18c[1] -= 1
    
    if (not(cond:6_1))
        (*(*var_18c + 4))(eax_2)
        bool cond:9_1 = var_18c[2] != 1
        var_18c[2]
        var_18c[2] -= 1
        
        if (not(cond:9_1))
            (*(*var_18c + 8))()

var_8_1.b = 0

if (ecx_2 != 0)
    bool cond:8_1 = ecx_2[1] != 1
    ecx_2[1]
    ecx_2[1] -= 1
    
    if (not(cond:8_1))
        (*(*ecx_2 + 4))(eax_2)
        bool cond:12_1 = ecx_2[2] != 1
        ecx_2[2]
        ecx_2[2] -= 1
        
        if (not(cond:12_1))
            (*(*ecx_2 + 8))()

int32_t var_8_2 = 0xffffffff

if (esi_1 != 0)
    bool cond:11_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:11_1))
        (*(*esi_1 + 4))(eax_2)
        int32_t edi_1 = esi_1[2]
        esi_1[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi_1 + 8))()

int32_t* result
result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
