// 函数: sub_6522e0
// 地址: 0x6522e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3f96
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = arg1[1] - *arg1
int32_t ecx = 5

if (eax_4 u> 0x100000)
    ecx = 2

void* var_b8
sub_5b9470(&var_b8, eax_4 * ecx)
int32_t var_8_1 = 0
int32_t var_40 = 0
int32_t var_3c = 0
int32_t var_38 = 0
var_8_1.b = 1
int32_t eax_6 = *arg1
int32_t ecx_2 = eax_6
int32_t edx = arg1[1]

if (eax_6 == edx)
    ecx_2 = 0

int32_t var_d0_1 = ecx_2
void var_ac
sub_71cdd0(&var_ac, ecx_2, edx - eax_6)

while (true)
    void* esi_1 = var_b8
    int32_t var_b4
    int32_t i
    
    do
        void* eax_7 = esi_1
        
        if (esi_1 == var_b4)
            eax_7 = nullptr
        
        if (sub_71cea0(&var_ac, eax_7, var_b4 - esi_1) != 0)
            int32_t var_a4
            sub_5979b0(&var_b8, var_a4)
            void* edi_2 = var_b8
            void* eax_14 = edi_2
            
            if (edi_2 == var_b4)
                eax_14 = nullptr
            
            void* esi_3 = var_b4 - edi_2
            int32_t edx_2 = 0
            
            if (esi_3 s> 0)
                do
                    uint32_t ecx_9 = zx.d(edx_2.b)
                    eax_14 += 1
                    edx_2 += 1
                    ecx_9.b = *(ecx_9 + 0xadc4b0)
                    *(eax_14 - 1) ^= ecx_9.b
                while (edx_2 s< esi_3)
            
            sub_5970d0(arg1, &var_b8)
            
            if (var_40 != 0)
                j__free(var_40)
                int32_t var_40_1 = 0
                int32_t var_3c_1 = 0
                int32_t var_38_1 = 0
            
            if (edi_2 != 0)
                j__free(edi_2)
            
            int32_t result
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            sub_745f2b(eax_2 ^ &__saved_ebp)
            return result
    while (i u<= 0)
    
    sub_5979b0(&var_b8, (arg1[1] - *arg1) * ecx - esi_1 + var_b4)
