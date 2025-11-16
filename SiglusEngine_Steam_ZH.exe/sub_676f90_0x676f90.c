// 函数: sub_676f90
// 地址: 0x676f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6eb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx:1.b = arg1
char var_11 = ebx:1.b
void* edi = data_bac468
char var_12 = 0
char eax_3 = *(edi + 0x190)
__builtin_memcpy(&data_b5b468, 
    "\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\x"
"ff\x00\x00\x00", 
    0x1c)

if (eax_3 == 0 && sub_620c80(*(edi + 0x188)) == 0)
    int32_t eax_5
    int32_t ecx_2
    eax_5, ecx_2 = sub_600e10(edi + 0xd8)
    
    if (eax_5 == 1)
        int32_t var_40_1 = ecx_2
        sub_6defc0(*(data_bac468 + 0x178), 0x64)
    
    edi = data_bac468

void* esi = data_bac4e4
ebx.b = *(esi + 0xec)
int32_t ecx_4

if (ebx.b == 0)
    ecx_4 = 0
else
    ecx_4 = *(esi + 0x68)

data_b5b47c = ecx_4 * data_b5b47c s/ 0xff
int32_t ecx_6

if (ebx.b == 0)
    ecx_6 = 0
else
    ecx_6 = *(esi + 0x68)

int32_t ecx_8

if (*(esi + 0xee) == 0)
    ecx_8 = 0
else
    ecx_8 = *(esi + 0x70)

int32_t eax_18 = ecx_8 * ecx_6 * data_b5b474 s/ 0xff s/ 0xff
data_b5b474 = eax_18
int32_t ecx_10

if (ebx.b == 0)
    ecx_10 = 0
else
    ecx_10 = *(esi + 0x68)

int32_t ecx_18 = ecx_10 * data_b5b478 s/ 0xff * *(esi + 0x70) s/ 0xff
int32_t eax_21 = eax_18

if (*(edi + 0x190) != 0)
    eax_21 = ecx_18

data_b5b478 = ecx_18
int32_t edi_3 = sub_620e30(*(edi + 0x188)) * eax_21 s/ 0xff
int32_t ecx_22

if (ebx.b == 0)
    ecx_22 = 0
else
    ecx_22 = *(esi + 0x68)

int32_t ecx_24

if (*(esi + 0xed) == 0)
    ecx_24 = 0
else
    ecx_24 = *(esi + 0x6c)

data_b5b480 = ecx_24 * ecx_22 * data_b5b480 s/ 0xff s/ 0xff
int32_t ecx_26

if (ebx.b == 0)
    ecx_26 = 0
else
    ecx_26 = *(esi + 0x68)

int32_t ecx_28

if (*(esi + 0xef) == 0)
    ecx_28 = 0
else
    ecx_28 = *(esi + 0x74)

data_b5b46c = ecx_28 * ecx_26 * data_b5b46c s/ 0xff s/ 0xff
int32_t ecx_30

if (ebx.b == 0)
    ecx_30 = 0
else
    ecx_30 = *(esi + 0x68)

int32_t ecx_32

if (*(esi + 0xf0) == 0)
    ecx_32 = 0
else
    ecx_32 = *(esi + 0x78)

data_b5b470 = ecx_32 * ecx_30 * data_b5b470 s/ 0xff s/ 0xff
int32_t ecx_34

if (ebx.b == 0)
    ecx_34 = 0
else
    ecx_34 = *(esi + 0x68)

int32_t ecx_36

if (*(esi + 0xf1) == 0)
    ecx_36 = 0
else
    ecx_36 = *(esi + 0x7c)

int32_t edx_41
edx_41.b = ebx:1.b
data_b5b468 = ecx_36 * ecx_34 * data_b5b468 s/ 0xff s/ 0xff
sub_676d20(&var_12, edx_41.b, 0, &var_12)
ebx:1.b = var_12

if (*(data_bac4e4 + 0x114) == 0)
    ebx.b = 0
else if (*(data_bac458 + 0x491) == 0)
    int32_t eax_59
    
    if (edi_3 s> 0)
        eax_59 = sub_600e10(data_bac468 + 0xd8)
    
    if (edi_3 s<= 0 || eax_59 != 1)
        ebx.b = ebx:1.b != 0
    else
        ebx.b = eax_59.b
else
    ebx.b = 1

int32_t eax_60

if (edi_3 s> 0)
    eax_60 = sub_600e10(data_bac468 + 0xd8)

bool edx_42

if (edi_3 s<= 0 || eax_60 != 1)
    edx_42 = ebx:1.b != 0
else
    edx_42 = eax_60.b

void* esi_1 = data_bac4a0
void* ecx_42 = data_bac47c
*(esi_1 + 0x138) += *(ecx_42 + 4)
*(esi_1 + 0x148) += *(ecx_42 + 4)

if (*(esi_1 + 0x135) == 0 && ebx.b != 0)
    int32_t eax_63 = *(esi_1 + 0x140)
    *(esi_1 + 0x138) = 0
    *(esi_1 + 0x13c) = eax_63
    *(esi_1 + 0x135) = 1

if ((*(esi_1 + 0x135) != 0 || *(esi_1 + 0x135) != 0) && ebx.b == 0)
    int32_t eax_64 = *(esi_1 + 0x140)
    *(esi_1 + 0x138) = 0
    *(esi_1 + 0x13c) = eax_64
    *(esi_1 + 0x135) = ebx.b

if (*(esi_1 + 0x144) == 0 && edx_42 != 0)
    int32_t eax_65 = *(esi_1 + 0x150)
    *(esi_1 + 0x148) = 0
    *(esi_1 + 0x14c) = eax_65
    *(esi_1 + 0x144) = 1

if ((*(esi_1 + 0x144) != 0 || *(esi_1 + 0x144) != 0) && edx_42 == 0)
    int32_t eax_66 = *(esi_1 + 0x150)
    *(esi_1 + 0x148) = 0
    *(esi_1 + 0x14c) = eax_66
    *(esi_1 + 0x144) = edx_42

bool cond:1 = *(esi_1 + 0x135) == 0
int32_t ebx_1 = *(esi_1 + 0x13c)
*(esi_1 + 0x140) = 0xff
*(esi_1 + 0x150) = 0xff
int32_t eax_68
int32_t ecx_43

if (cond:1)
    int32_t eax_69 = *(esi_1 + 0x138)
    
    if (eax_69 s< 0x7d0)
        eax_69 = 0x7d0
    else if (eax_69 s> 0xbb8)
        eax_69 = 0xbb8
    
    ecx_43 = 0xff
    eax_68 = eax_69 - 0x7d0
else
    ecx_43 = *(data_bac4e4 + 0x110)
    eax_68 = *(esi_1 + 0x138)
    
    if (eax_68 s< 0)
        eax_68 = 0
    else if (eax_68 s> 0x3e8)
        eax_68 = 0x3e8

bool cond:2 = *(esi_1 + 0x144) == 0
int32_t ebx_2 = *(esi_1 + 0x14c)
*(esi_1 + 0x140) = (ecx_43 - ebx_1) * eax_68 s/ 0x3e8 + ebx_1
void* eax_75 = data_bac510

if (cond:2)
    int32_t eax_82
    
    if (*(esi_1 + 0x145) == 0)
        int32_t ecx_52 = *(esi_1 + 0x148)
        int32_t eax_92 = *(eax_75 + 0xa4df78) + 0x1f4
        
        if (eax_92 != 0x1f4)
            if (eax_92 s<= 0x1f4)
                if (eax_92 s< 0x1f4)
                    if (ecx_52 s< eax_92)
                        ecx_52 = eax_92
                    else if (ecx_52 s> 0x1f4)
                        ecx_52 = 0x1f4
            else if (ecx_52 s< 0x1f4)
                ecx_52 = 0x1f4
            else if (ecx_52 s> eax_92)
                ecx_52 = eax_92
            
            eax_82 = divs.dp.d(sx.q((0xff - ebx_2) * (ecx_52 - 0x1f4)), eax_92 - 0x1f4) + ebx_2
        else
            eax_82 = 0xff
    else
        int32_t edx_48 = *(eax_75 + 0xa4df74)
        int32_t eax_81 = *(esi_1 + 0x148)
        int32_t ecx_50 = *(eax_75 + 0xa4df78) + edx_48
        
        if (edx_48 != ecx_50)
            int32_t eax_85
            int32_t ecx_51
            
            if (edx_48 s>= ecx_50)
                if (edx_48 s<= ecx_50)
                    eax_85 = (eax_81 - edx_48) * (0xff - ebx_2)
                    ecx_51 = ecx_50 - edx_48
                else if (eax_81 s>= ecx_50)
                    if (eax_81 s> edx_48)
                        eax_81 = edx_48
                    
                    eax_85 = (eax_81 - edx_48) * (0xff - ebx_2)
                    ecx_51 = ecx_50 - edx_48
                else
                    eax_85 = (ecx_50 - edx_48) * (0xff - ebx_2)
                    ecx_51 = ecx_50 - edx_48
            else if (eax_81 s< edx_48)
                eax_85 = 0
                ecx_51 = ecx_50 - edx_48
            else if (eax_81 s<= ecx_50)
                eax_85 = (eax_81 - edx_48) * (0xff - ebx_2)
                ecx_51 = ecx_50 - edx_48
            else
                eax_85 = (ecx_50 - edx_48) * (0xff - ebx_2)
                ecx_51 = ecx_50 - edx_48
            
            eax_82 = divs.dp.d(sx.q(eax_85), ecx_51) + ebx_2
        else
            eax_82 = 0xff
    
    *(esi_1 + 0x150) = eax_82
else
    int32_t edx_45 = *(eax_75 + 0xa4df6c)
    int32_t edi_4 = *(eax_75 + 0xa4df7c)
    int32_t ecx_47 = *(eax_75 + sub_a4df70) + edx_45
    int32_t eax_76 = *(esi_1 + 0x148)
    
    if (edx_45 != ecx_47)
        if (edx_45 s>= ecx_47)
            if (edx_45 s> ecx_47)
                if (eax_76 s< ecx_47)
                    eax_76 = ecx_47
                else if (eax_76 s> edx_45)
                    eax_76 = edx_45
        else if (eax_76 s< edx_45)
            eax_76 = edx_45
        else if (eax_76 s> ecx_47)
            eax_76 = ecx_47
        
        edi_4 = ebx_2 + divs.dp.d(sx.q((eax_76 - edx_45) * (edi_4 - ebx_2)), ecx_47 - edx_45)
    
    *(esi_1 + 0x150) = edi_4

int32_t ecx_55 = *(esi_1 + 0x140) * data_b5b480
HANDLE ebx_3 = data_b5b46c
HANDLE var_28 = ebx_3
HANDLE eax_96 = data_b5b470
uint32_t var_20 = data_b5b468
int32_t edi_14 = ecx_55 s/ 0xff
data_b5b480 = edi_14

if (var_11 == 0 && edi_14 == *(esi_1 + 0x120))
    goto label_677612

sub_600170(edi_14)
int32_t eax_98

if (var_11 == 0)
    esi_1 = data_bac4a0
label_677612:
    eax_98 = edi_3
    
    if (eax_98 == *(esi_1 + 0x124))
        goto label_677640
    
    goto label_67762f

eax_98 = edi_3
label_67762f:
sub_6010a0(data_bac468 + 0xd8, eax_98)
HANDLE eax_99

if (var_11 == 0)
    esi_1 = data_bac4a0
label_677640:
    
    if (ebx_3 != *(esi_1 + 0x128))
        goto label_677655
    
    ebx_3.b = var_11
label_67766c:
    eax_99 = eax_96
    
    if (eax_99 == *(esi_1 + 0x12c))
        goto label_677698
    
    goto label_677689

label_677655:
sub_601ed0(data_bac468 + 0x194, ebx_3)
ebx_3.b = var_11

if (ebx_3.b == 0)
    esi_1 = data_bac4a0
    goto label_67766c

eax_99 = eax_96
label_677689:
sub_601ed0(data_bac468 + 0x304, eax_99)
uint32_t eax_100
int32_t edx_53

if (ebx_3.b != 0)
    eax_100, edx_53 = sub_5cb230(data_bac468 + 0x3bc, var_20)
else
    esi_1 = data_bac4a0
label_677698:
    eax_100 = var_20
    
    if (eax_100 != *(esi_1 + 0x130))
        eax_100, edx_53 = sub_5cb230(data_bac468 + 0x3bc, eax_100)

edx_53.b = ebx_3.b
sub_676d20(eax_100, edx_53.b, 1, nullptr)
void* ecx_64 = data_bac4a0
*(ecx_64 + 0x11c) = data_b5b47c
*(ecx_64 + 0x124) = edi_3
*(ecx_64 + 0x128) = var_28
*(ecx_64 + 0x12c) = eax_96
*(ecx_64 + 0x130) = var_20
int32_t* result = data_bac434
*(ecx_64 + 0x120) = edi_14
result.b = *(result + 0xe)
char var_11_1 = result.b

if (result.b == 0)
    if (*(ecx_64 + 0x134) != 0)
        void* eax_131 = data_bac468
        
        if (*(eax_131 + 0x4b0) != 0)
            sub_5f1200(eax_131 + 0x4b0)
            eax_131 = data_bac468
            ecx_64 = data_bac4a0
        
        if (*(eax_131 + 0x4a8) != 0)
            sub_5f1200(eax_131 + 0x4a8)
            eax_131 = data_bac468
            ecx_64 = data_bac4a0
        
        if (*(eax_131 + 0x4a0) == 0)
            result.b = var_11_1
        else
            sub_5f1200(eax_131 + 0x4a0)
            ecx_64 = data_bac4a0
            result.b = var_11_1
else if (*(ecx_64 + 0x134) == 0)
    int32_t* eax_106
    int32_t* ecx_65
    eax_106, ecx_65 = sub_745f3f(0x28)
    void* const eax_107
    
    if (eax_106 == 0)
        eax_107 = nullptr
    else
        ecx_65 = eax_106
        eax_107 = sub_6e18b0(ecx_65)
    
    void* const var_2c = eax_107
    var_28 = nullptr
    int32_t var_8_1 = 0
    HANDLE* var_40_8 = &var_28
    sub_605850(eax_107, eax_107, ecx_65)
    int32_t var_8_2 = 1
    sub_54d190(data_bac468 + 0x4a0, &var_2c)
    int32_t var_8_3 = 0xffffffff
    HANDLE edi_15 = var_28
    
    if (edi_15 != 0)
        bool cond:8_1 = *(edi_15 + 4) != 1
        *(edi_15 + 4)
        *(edi_15 + 4) -= 1
        
        if (not(cond:8_1))
            (*(*edi_15 + 4))(eax_2)
            bool cond:9_1 = *(edi_15 + 8) != 1
            *(edi_15 + 8)
            *(edi_15 + 8) -= 1
            
            if (not(cond:9_1))
                (*(*edi_15 + 8))()
    
    int32_t* edx_56 = *(data_bac468 + 0x4a0)
    *edx_56 = 0
    edx_56[1] = 0
    edx_56[2] = 0
    edx_56[3] = 0
    edx_56[5] = edx_56[4]
    *edx_56 = 1
    edx_56[1] = 0x10
    edx_56[2] = 0xac44
    edx_56[3] = 0x400
    sub_5979b0(&edx_56[4], 0x400)
    struct NT3::C_sound_stream_base::NT3::C_sound_stream::VTable** eax_114
    struct NT3::C_sound_stream_base::NT3::C_sound_stream::VTable** ecx_72
    eax_114, ecx_72 = sub_745f3f(0x20)
    struct NT3::C_sound_stream_base::NT3::C_sound_stream::VTable** eax_115
    
    if (eax_114 == 0)
        eax_115 = nullptr
    else
        ecx_72 = eax_114
        eax_115 = sub_6e1a50(ecx_72)
    
    struct NT3::C_sound_stream_base::NT3::C_sound_stream::VTable** var_24 = eax_115
    var_20 = 0
    int32_t var_8_4 = 2
    uint32_t* var_40_10 = &var_20
    sub_6058c0(eax_115, eax_115, ecx_72)
    int32_t var_8_5 = 3
    sub_54d190(data_bac468 + 0x4a8, &var_24)
    int32_t var_8_6 = 0xffffffff
    uint32_t edi_16 = var_20
    
    if (edi_16 != 0)
        bool cond:10_1 = *(edi_16 + 4) != 1
        *(edi_16 + 4)
        *(edi_16 + 4) -= 1
        
        if (not(cond:10_1))
            (*(*edi_16 + 4))(eax_2)
            bool cond:11_1 = *(edi_16 + 8) != 1
            *(edi_16 + 8)
            *(edi_16 + 8) -= 1
            
            if (not(cond:11_1))
                (*(*edi_16 + 8))()
    
    void* edx_59 = data_bac468
    int32_t eax_120 = *(edx_59 + 0x4a0)
    int32_t* eax_121 = *(edx_59 + 0x4a4)
    
    if (eax_121 != 0)
        eax_121[1]
        eax_121[1] += 1
        edx_59 = data_bac468
    
    operator new(*(edx_59 + 0x4a8), eax_120, eax_121)
    struct NT3::C_sound_stream_base::NT3::C_sound_stream::VTable** eax_123
    int32_t* ecx_80
    eax_123, ecx_80 = sub_745f3f(0x128)
    
    if (eax_123 == 0)
        eax_123 = nullptr
    else
        eax_123[0x48] = 0
        eax_123[0x49] = 0
        *eax_123 = nullptr
        eax_123[1] = 0
    
    var_24 = eax_123
    var_20 = 0
    int32_t var_8_7 = 4
    uint32_t* var_40_13 = &var_20
    sub_677a40(eax_123, eax_123, ecx_80)
    int32_t var_8_8 = 5
    sub_54d190(data_bac468 + 0x4b0, &var_24)
    int32_t var_8_9 = 0xffffffff
    uint32_t edi_17 = var_20
    
    if (edi_17 != 0)
        bool cond:12_1 = *(edi_17 + 4) != 1
        *(edi_17 + 4)
        *(edi_17 + 4) -= 1
        
        if (not(cond:12_1))
            (*(*edi_17 + 4))(eax_2)
            int32_t esi_2 = *(edi_17 + 8)
            *(edi_17 + 8) -= 1
            
            if (esi_2 == 1)
                (*(*edi_17 + 8))()
    
    void* edx_61 = data_bac468
    int32_t* eax_128 = *(edx_61 + 0x4a8)
    void* eax_129 = *(edx_61 + 0x4ac)
    void* var_40_15 = eax_129
    
    if (eax_129 != 0)
        *(eax_129 + 4)
        *(eax_129 + 4) += 1
        edx_61 = data_bac468
    
    int32_t var_40_16 = sub_6de830(*(edx_61 + 0x4b0), 1, eax_128)
    x434b916e::_ExceptionPtr_static<class std::bad_exception>::operator[]::_ExceptionPtr_static<class std::bad_exception>::_ExceptionPtr_static<class std::bad_exception>(
        *(data_bac468 + 0x4b0))
    ecx_64 = data_bac4a0
    result.b = var_11_1

*(ecx_64 + 0x134) = result.b
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
