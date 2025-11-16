// 函数: sub_69e6e0
// 地址: 0x69e6e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c993d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_114 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t* var_f4 = ebx
void* esi = &ebx[3]
int32_t ecx_1 = sub_5c3760(*(ebx[3] + 4))
void* eax_4 = *esi
int32_t var_e8
int32_t var_118_1 = var_e8
int32_t var_11c = ecx_1
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *esi
*eax_5 = eax_5
void* eax_6 = *esi
*(eax_6 + 8) = eax_6
*(esi + 4) = 0
sub_6429c0(*ebx, ebx[1])
ebx[1] = *ebx
int32_t* var_e4 = nullptr
int32_t var_e0 = 0
var_e4 = sub_5d4eb0()
int32_t var_8_1 = 0
void* edi = nullptr
void* edx_1 = data_bac45c
int32_t eax_10 = *(*(edx_1 + 0x10) + 0x50)

if (eax_10 s> 0)
    int32_t ecx_3 = 0
    int32_t var_d4_1 = 0
    
    do
        int32_t esi_1 = 0
        int32_t eax_13 = *(*(*(edx_1 + 0x54) + ecx_3 + 4) + 0x78)
        int32_t var_d8_1 = eax_13
        
        if (eax_13 s> 0)
            do
                int32_t var_cc
                int32_t* eax_14 = sub_6981c0(&var_cc, edi, esi_1)
                var_8_1.b = 1
                uint32_t ecx_4 = zx.d(data_4ebee65)
                uint32_t var_118_3 = ecx_4
                int32_t* var_11c_2 = eax_14
                int32_t* var_fc
                sub_69f0e0(&var_e4, &var_fc, ecx_4)
                var_8_1.b = 0
                int32_t var_b8
                
                if (var_b8 u>= 8)
                    j__free(var_cc)
                
                esi_1 += 1
            while (esi_1 s< eax_13)
            
            edx_1 = data_bac45c
            ecx_3 = var_d4_1
        
        edi += 1
        ecx_3 += 0x54
        var_d4_1 = ecx_3
    while (edi s< eax_10)
    
    ebx = var_f4

void* ecx_6 = data_bac510
char* var_f8
int32_t* var_f0
int32_t* var_dc

if (*(ecx_6 + 0x10bdc) != *(ecx_6 + 0x10be0))
    int32_t var_5c_1 = 7
    int32_t var_60_1 = 0
    int16_t var_70 = 0
    int32_t var_58_1 = 0
    int32_t var_3c_1 = 7
    int32_t var_40_1 = 0
    int16_t var_50 = 0
    int32_t var_24_1 = 7
    int32_t var_28_1 = 0
    int16_t var_38 = 0
    var_8_1.b = 3
    int32_t ecx_7 = 0
    int32_t* edi_1 = var_e4
    int32_t eax_18 = (*(ecx_6 + 0x10be0) - *(ecx_6 + 0x10bdc)) s>> 6
    var_e8 = eax_18
    int32_t var_d8_2 = 0
    
    if (eax_18 s> 0)
        int32_t esi_2 = 0
        int32_t var_d4_2 = 0
        
        do
            void** eax_21 = *(data_bac510 + 0x10bdc) + esi_2
            
            if (&var_70 != eax_21)
                sub_52e3c0(&var_70, eax_21, 0, 0xffffffff)
                ecx_7 = var_d8_2
            
            int32_t var_58_2 = ecx_7
            int32_t* eax_22
            void* ecx_10
            eax_22, ecx_10 = sub_5c37c0(&var_70)
            int32_t* var_118_6 = eax_22
            void* var_11c_3 = &eax_22[4]
            void* var_104
            sub_5c3870(&ebx[3], &var_104, ecx_10)
            void* eax_24 = data_bac510
            char var_54 = 1
            int32_t* eax_26 = *(eax_24 + 0x10bdc) + esi_2
            void** eax_27 = sub_669720(&var_e4, eax_26)
            int32_t** eax_30
            
            if (eax_27 == var_e4)
                var_f0 = var_e4
                eax_30 = &var_f0
            else
                void* eax_28 = &eax_27[4]
                int32_t ecx_13 = *(eax_28 + 0x10)
                
                if (eax_27[9] u>= 8)
                    eax_28 = *eax_28
                
                int32_t var_118_8 = ecx_13
                void* ecx_14 = eax_26
                
                if (sub_536340(ecx_14, ecx_14, *(ecx_14 + 0x10), eax_28) s< 0)
                    var_f0 = var_e4
                    eax_30 = &var_f0
                else
                    var_dc = eax_27
                    eax_30 = &var_dc
            
            int32_t esi_4 = var_d4_2
            bool var_53_1 = *eax_30 != edi_1
            void** eax_34 = *(data_bac510 + 0x10bdc) + esi_4
            
            if (&var_50 != eax_34)
                sub_52e3c0(&var_50, eax_34, 0, 0xffffffff)
            
            void** eax_38 = *(data_bac510 + 0x10bdc) + 0x18 + esi_4
            
            if (&var_38 != eax_38)
                sub_52e3c0(&var_38, eax_38, 0, 0xffffffff)
            
            void* ecx_17 = data_bac510
            int32_t var_20_1 = *(esi_4 + *(ecx_17 + 0x10bdc) + 0x30)
            int32_t var_1c_1 = *(esi_4 + *(ecx_17 + 0x10bdc) + 0x34)
            int32_t ecx_18 = ebx[1]
            int32_t var_18_1 = *(esi_4 + *(ecx_17 + 0x10bdc) + 0x38)
            int32_t eax_45
            
            if (&var_54 u< ecx_18)
                eax_45 = *ebx
            
            if (&var_54 u>= ecx_18 || eax_45 u> &var_54)
                int32_t edx_6 = ebx[2]
                
                if (ecx_18 == edx_6 && (edx_6 - ecx_18) s>> 6 u< 1)
                    int32_t ecx_27 = (ecx_18 - *ebx) s>> 6
                    
                    if (0x3ffffff - ecx_27 u< 1)
                        goto label_69ec1b
                    
                    int32_t edx_8 = (edx_6 - *ebx) s>> 6
                    uint32_t ecx_30 = edx_8 u>> 1
                    int32_t edx_9
                    
                    if (0x3ffffff - ecx_30 u>= edx_8)
                        edx_9 = edx_8 + ecx_30
                    else
                        edx_9 = 0
                    
                    if (edx_9 u< ecx_27 + 1)
                        edx_9 = ecx_27 + 1
                    
                    sub_69f000(ebx, edx_9)
                
                char* ecx_32 = ebx[1]
                var_f8 = ecx_32
                char* var_d0_5 = ecx_32
                var_8_1.b = 5
                
                if (ecx_32 != 0)
                    sub_69f3d0(ecx_32, &var_54)
            else
                int32_t edx_2 = ebx[2]
                
                if (ecx_18 == edx_2 && (edx_2 - ecx_18) s>> 6 u< 1)
                    int32_t ecx_20 = (ecx_18 - *ebx) s>> 6
                    
                    if (0x3ffffff - ecx_20 u< 1)
                        goto label_69ec1b
                    
                    int32_t edx_4 = (edx_2 - *ebx) s>> 6
                    uint32_t ecx_23 = edx_4 u>> 1
                    int32_t edx_5
                    
                    if (0x3ffffff - ecx_23 u>= edx_4)
                        edx_5 = edx_4 + ecx_23
                    else
                        edx_5 = 0
                    
                    if (edx_5 u< ecx_20 + 1)
                        edx_5 = ecx_20 + 1
                    
                    sub_69f000(ebx, edx_5)
                
                char* ecx_25 = ebx[1]
                void* esi_7 = ((&var_54 - eax_45) & 0xffffffc0) + *ebx
                char* var_d0_3 = ecx_25
                var_f8 = ecx_25
                var_8_1.b = 4
                
                if (ecx_25 != 0)
                    sub_69f3d0(ecx_25, esi_7)
                
                esi_4 = var_d4_2
            
            esi_2 = esi_4 + 0x40
            var_8_1.b = 3
            ecx_7 = var_d8_2 + 1
            ebx[1] += 0x40
            var_d8_2 = ecx_7
            var_d4_2 = esi_2
        while (ecx_7 s< var_e8)
        
        if (var_24_1 u>= 8)
            j__free(var_38.d)
    
    int32_t var_24_2 = 7
    int32_t var_28_2 = 0
    var_38 = 0
    
    if (var_3c_1 u>= 8)
        j__free(var_50.d)
    
    int32_t var_3c_2 = 7
    var_8_1.b = 0
    int32_t var_40_2 = 0
    var_50 = 0
    
    if (var_5c_1 u>= 8)
        j__free(var_70.d)

int32_t var_d8_3
void* ecx_34
int32_t ebx_2
int32_t* i

if (var_e0 != 0)
    ecx_34 = esi
    var_d8_3 = 0
    ebx_2 = *ecx_34
    i = *var_e4

if (var_e0 == 0 || var_e0 s<= 0)
label_69ee77:
    int32_t** eax_81 = var_e4
    sub_641bb0(&var_e4, &var_f8, *eax_81, eax_81)
    int32_t result = j__free(var_e4)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_745f2b(eax_2 ^ &__saved_ebp)
    return result

while (true)
    void** eax_58 = sub_669720(ecx_34, &i[4])
    int32_t* eax_62
    
    if (eax_58 == *esi)
        var_f0 = *esi
        eax_62 = &var_f0
    else
        void* eax_60 = &eax_58[4]
        int32_t ecx_35 = *(eax_60 + 0x10)
        
        if (eax_58[9] u>= 8)
            eax_60 = *eax_60
        
        int32_t var_118_17 = ecx_35
        
        if (sub_536340(&i[4], &i[4], i[8], eax_60) s< 0)
            var_f0 = *esi
            eax_62 = &var_f0
        else
            var_e8 = eax_58
            eax_62 = &var_e8
    
    if (*eax_62 == ebx_2)
        int32_t var_9c_1 = 7
        int32_t var_a0_1 = 0
        int16_t var_b0 = 0
        int32_t var_84_1 = 7
        int32_t var_88_1 = 0
        int16_t var_98_1 = 0
        var_8_1.b = 6
        int16_t var_b4 = 0x100
        
        if (&var_b0 != &i[4])
            sub_52e3c0(&var_b0, &i[4], 0, 0xffffffff)
        
        struct _EXCEPTION_REGISTRATION_RECORD*** edi_3 = var_f4
        int32_t ecx_38 = edi_3[1]
        struct _EXCEPTION_REGISTRATION_RECORD** edx_10
        
        if (&var_b4 u< ecx_38)
            edx_10 = *edi_3
        
        char* ecx_51
        
        if (&var_b4 u>= ecx_38 || edx_10 u> &var_b4)
            int32_t edx_15 = edi_3[2]
            
            if (ecx_38 == edx_15 && (edx_15 - ecx_38) s>> 6 u< 1)
                int32_t ecx_46 = (ecx_38 - *edi_3) s>> 6
                
                if (0x3ffffff - ecx_46 u< 1)
                    break
                
                int32_t edx_17 = (edx_15 - *edi_3) s>> 6
                var_dc = ecx_46 + 1
                uint32_t ecx_49 = edx_17 u>> 1
                int32_t edx_18
                
                if (0x3ffffff - ecx_49 u>= edx_17)
                    edx_18 = edx_17 + ecx_49
                else
                    edx_18 = 0
                
                if (edx_18 u< var_dc)
                    edx_18 = var_dc
                
                sub_69f000(edi_3, edx_18)
            
            ecx_51 = edi_3[1]
            var_f8 = ecx_51
            var_dc = ecx_51
            var_8_1.b = 8
            
            if (ecx_51 != 0)
                sub_69f3d0(ecx_51, &var_b4)
        else
            int32_t edx_11 = edi_3[2]
            
            if (ecx_38 == edx_11 && (edx_11 - ecx_38) s>> 6 u< 1)
                int32_t ecx_40 = (ecx_38 - *edi_3) s>> 6
                
                if (0x3ffffff - ecx_40 u< 1)
                    break
                
                int32_t edx_13 = (edx_11 - *edi_3) s>> 6
                var_dc = ecx_40 + 1
                uint32_t ecx_43 = edx_13 u>> 1
                int32_t* edx_14
                
                if (0x3ffffff - ecx_43 u>= edx_13)
                    edx_14 = edx_13 + ecx_43
                else
                    edx_14 = nullptr
                
                if (edx_14 u< var_dc)
                    edx_14 = var_dc
                
                sub_69f000(edi_3, edx_14)
            
            ecx_51 = edi_3[1]
            var_f8 = ecx_51
            var_dc = ecx_51
            var_8_1.b = 7
            
            if (ecx_51 != 0)
                sub_69f3d0(ecx_51, &(*edi_3)[((&var_b4 - edx_10) s>> 6) * 0x10])
        edi_3[1] = &edi_3[1][0x10]
        var_8_1.b = 0
        
        if (var_84_1 u>= 8)
            j__free(var_98_1.d)
        
        int32_t var_84_2 = 7
        int32_t var_88_2 = 0
        int16_t var_98_2 = 0
        
        if (var_9c_1 u>= 8)
            j__free(var_b0.d)
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0xd) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0xd) == 0)
                i = i_2
                i_2 = *i
    
    int32_t eax_80 = var_d8_3 + 1
    var_d8_3 = eax_80
    
    if (eax_80 s>= var_e0)
        goto label_69ee77
    
    ecx_34 = esi

label_69ec1b:
sub_743191("vector<T> too long")
noreturn
