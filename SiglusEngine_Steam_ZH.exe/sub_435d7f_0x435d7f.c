// 函数: sub_435d7f
// 地址: 0x435d7f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_3c = 0
int32_t var_2c = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t* ebx = nullptr
int32_t* eax = sub_745f3f(0x1c)
int32_t* var_1c

if (eax == 0)
    var_1c = nullptr
else
    var_1c = sub_42f3c6(eax)

int32_t edi
int32_t var_a0 = edi

if (var_1c == 0)
    goto label_4363f7

int32_t* eax_2 = sub_745f3f(0x1c)
int32_t* var_18_1

if (eax_2 == 0)
    var_18_1 = nullptr
else
    var_18_1 = sub_42f3c6(eax_2)

if (var_18_1 == 0)
    goto label_4363f7

int32_t* eax_4 = sub_745f3f(0x1c)
int32_t* var_14_1

if (eax_4 == 0)
    var_14_1 = nullptr
else
    var_14_1 = sub_42f3c6(eax_4)

if (var_14_1 == 0)
    goto label_4363f7

int32_t* eax_6 = sub_745f3f(0x1c)
int32_t* var_10_1

if (eax_6 == 0)
    var_10_1 = nullptr
else
    var_10_1 = sub_42f3c6(eax_6)

if (var_10_1 == 0)
    goto label_4363f7

int32_t* eax_8 = sub_745f3f(0x48)

if (eax_8 == 0)
    ebx = nullptr
else
    ebx = sub_433367(eax_8)

if (ebx == 0)
    goto label_4363f7

void* edx_1 = *(arg2 + 0x18)

if (edx_1 == 0 || *(edx_1 + 4) != 0xb)
    goto label_4363f7

void* ecx_10 = *(arg2 + 0x14)

if (ecx_10 == 0 || *(ecx_10 + 4) != 3)
    goto label_4363f7

int32_t eax_11 = *(edx_1 + 0x1c)

if ((eax_11.b & 2) != 0 || *(ecx_10 + 0x10) != 9)
    goto label_4363f7

int32_t ecx_11 = *(ecx_10 + 0x18)

if (ecx_11 == 0)
    goto label_4363f7

void* var_4c_1 = nullptr
uint32_t var_5c_1 = ((eax_11 u>> 3 & 0x10) | (eax_11 & 8)) u>> 3
void* eax_13 = *(edx_1 + 0x2c)

if (eax_13 == 0)
    goto label_435f0c

if (*(eax_13 + 4) != 3 || *(eax_13 + 0x10) != 9)
    goto label_4363f7

var_4c_1 = *(eax_13 + 0x18)
label_435f0c:
void var_68
void var_64
void var_60
void* var_48
void var_40
int32_t var_30
int32_t esi =
    sub_42f655(arg1, *(edx_1 + 0x20), &var_30, &var_64, &var_68, &var_40, &var_60, &var_48)
void* var_b0_2
void* var_ac_2
char* var_a4_2

if (esi s>= 0)
    if (var_30 == 0x12 || var_30 == 0x11)
        goto label_4363f7
    
    if (var_30 == &data_f30000)
        void* eax_17 = *(edx_1 + 0x28)
        
        if (eax_17 != 0 && *(eax_17 + 0x1c) == 0)
            void* eax_18 = *(eax_17 + 0x20)
            
            if (eax_18 != 0 && *(eax_18 + 4) == 1)
                void* edi_3 = *(eax_18 + 8)
                
                if (edi_3 != 0 && *(edi_3 + 4) == 0xe)
                    int32_t* eax_19 = sub_745f3f(0xc)
                    
                    if (eax_19 == 0)
                        eax_19 = nullptr
                    else
                        eax_19[2] = 0
                    
                    if (eax_19 != 0)
                        *eax_19 = ecx_11
                        eax_19[1] = *(edi_3 + 0x18)
                        eax_19[2] = *(arg1 + 0x358)
                        *(arg1 + 0x358) = eax_19
        
        goto label_4363f7
    
    int32_t var_a4_3 = 0
    void var_50
    void* var_a8_3 = &var_50
    int32_t* var_ac_3 = var_18_1
    int32_t var_b0_3 = arg3
    int32_t eax_20
    void* edi_5
    eax_20, ebp_1, edi_5 =
        sub_42fdc0(arg1, esi, edx_1, *(edx_1 + 0x20), ecx_10 + 0x10, var_4c_1, nullptr)
    
    if (eax_20 s< 0)
        var_a4_2 = "ID3DXEffectCompiler: Error initializing variable type"
        int32_t var_a8_4 = 0
        var_ac_2 = ebp_1[-7]
        var_b0_2 = ebp_1[-2] + 0x28
        goto label_435ff9
    
    if (ebp_1[-0xb] s< 0xa || ebp_1[-0xb] s> 0xe)
        int32_t eax_57 = sub_745f3f(ebp_1[-0x11])
        ebp_1[-0xa] = eax_57
        
        if (eax_57 == 0)
            goto label_4363f7
        
        int32_t ecx_40 = ebp_1[-0x11]
        int32_t edx_4 = ebp_1[-0xa]
        __builtin_memset(__builtin_memset(edx_4, 0, ecx_40 u>> 2 << 2), 0, ecx_40 & 3)
        void* ecx_44 = ebp_1[-2]
        void* var_a8_7 = *(ebp_1[-8] + 0x20)
        ebp_1[-0x15] = edx_4
        
        if (sub_42fcc6(ecx_44, var_a8_7, &ebp_1[-0x15]) s< 0)
            goto label_4363f7
        
        if (sub_42f442(ebp_1[4], ebp_1[-0xa], ebp_1[-0x11], &ebp_1[-0x10]) s< 0)
            goto label_4363f7
        
        goto label_436291
    
    void* eax_23 = *(edi_5 + 0x28)
    
    if (eax_23 == 0)
        ebp_1[-0xc] = 0
        ebp_1[-1] = 0
        
        while (true)
            int32_t eax_48 = ebp_1[-0xf]
            
            if (eax_48 u< 1)
                eax_48 = 1
            
            if (ebp_1[-1] u>= eax_48)
                break
            
            int32_t eax_49 = ebp_1[-1]
            int32_t eax_50 = neg.d(eax_49)
            
            if (sub_42f442(ebp_1[-3], &ebp_1[-0xc], 4, 
                    not.d(sbb.d(eax_50, eax_50, eax_49 != 0)) & &ebp_1[-0x10]) s< 0)
                goto label_4363f7
            
            ebp_1[-1] += 1
        
        goto label_43617d
    
    if (*(eax_23 + 0x1c) != 0)
        goto label_4363f7
    
    void* eax_24 = *(eax_23 + 0x20)
    
    if (eax_24 == 0 || *(eax_24 + 4) != 1)
        goto label_4363f7
    
    void* ecx_25 = *(eax_24 + 8)
    
    if (ecx_25 == 0 || *(ecx_25 + 4) != 0xe)
        goto label_4363f7
    
    ebp_1[-0xd] = eax_24
    ebp_1[-1] = 0
label_436060:
    int32_t eax_25 = ebp_1[-0xf]
    
    if (eax_25 u< 1)
        eax_25 = 1
    
    if (ebp_1[-1] u< eax_25)
        void* eax_27 = *(ebp_1[-0xd] + 8)
        ebp_1[-0x1a] = 0
        ebp_1[-9] = &ebp_1[-0x24]
        void* edi_6 = *(eax_27 + 0x18)
        
        while (true)
            void* ecx_34
            
            if (edi_6 == 0)
                int32_t eax_30 = ebp_1[-0x1a]
                ebp_1[-0xc] &= edi_6
                ebp_1[-9] = eax_30
                
                if (eax_30 != 0)
                    void* edi_7 = ebp_1[-2]
                    int32_t i
                    
                    do
                        int32_t var_a4_4 = 0x100
                        int32_t var_a8_6 = ebp_1[4]
                        int32_t eax_32
                        int80_t st0_1
                        st0_1, eax_32 = sub_4302e7(edi_7, ebp_1[-9], 0xffffffff, *(edi_7 + 0x328), 
                            ebp_1[-1], &ebp_1[-0xc], ebp_1[-4])
                        
                        if (eax_32 s< 0)
                            goto label_4361ca
                        
                        i = *(ebp_1[-9] + 0x28)
                        ebp_1[-9] = i
                    while (i != 0)
                
                int32_t eax_34 = ebp_1[-1]
                int32_t eax_35 = neg.d(eax_34)
                
                if (sub_42f442(ebp_1[-3], &ebp_1[-0xc], 4, 
                        not.d(sbb.d(eax_35, eax_35, eax_34 != 0)) & &ebp_1[-0x10]) s< 0)
                    goto label_4361ca
                
                sub_42f5d6(ebp_1[-3], ebp_1[-4])
                int32_t* eax_41 = sub_745f3f(0x1c)
                
                if (eax_41 == 0)
                    ebp_1[-4] = 0
                else
                    ebp_1[-4] = sub_42f3c6(eax_41)
                
                ecx_34 = &ebp_1[-0x24]
                
                if (ebp_1[-4] == 0)
                    goto label_4361d0
                
                sub_42f345(ecx_34)
                int32_t eax_44 = *(ebp_1[-0xd] + 0xc)
                ebp_1[-1] += 1
                ebp_1[-0xd] = eax_44
                
                if (eax_44 != 0)
                    goto label_436060
                
                goto label_43617d
            
            if (sub_433695(ebp_1[-2], edi_6, &ebp_1[-9], 0x100) s< 0)
            label_4361ca:
                ecx_34 = &ebp_1[-0x24]
            label_4361d0:
                sub_42f345(ecx_34)
                break
            
            edi_6 = *(edi_6 + 0xc)
        
        goto label_4363f7
    
label_43617d:
    sub_42f5d6(ebp_1[4], ebp_1[-3])
    int32_t eax_45 = ebp_1[-0xf]
    ebp_1[-3] = 0
    
    if (eax_45 u<= 0 || eax_45 u>= ebp_1[-1])
        void* eax_56 = ebp_1[-2]
        *(eax_56 + 0x334) += ebp_1[-1]
    label_436291:
        ebx[0xa] = 0
        void* esi_2 = *(ebp_1[2] + 0x1c)
        
        if (esi_2 != 0)
            void* edi_10 = ebp_1[-2]
            
            while (true)
                if (*(esi_2 + 4) != 1)
                    goto label_4363f7
                
                void* eax_64 = *(esi_2 + 8)
                
                if (eax_64 == 0)
                    goto label_4363f7
                
                if (*(eax_64 + 4) != 6)
                    goto label_4363f7
                
                if (*(eax_64 + 0x10) != 1)
                    sub_42aba3(edi_10 + 0x28, ebp_1[-7], 0, 
                        "ID3DXEffectCompiler: There was a problem getting annotations")
                    goto label_4363f7
                
                void* var_a4_12 = &ebx[0xc]
                int32_t var_a8_9 = ebp_1[4]
                int32_t eax_65 = sub_433d40(edi_10, eax_64, ebp_1[-6])
                
                if (eax_65 s< 0 && ebp_1[-0xe] s>= 0)
                    ebp_1[-0xe] = eax_65
                
                ebx[0xa] += 1
                esi_2 = *(esi_2 + 0xc)
                
                if (esi_2 == 0)
                    if (ebp_1[-0xe] s< 0)
                        goto label_4363f7
                    
                    break
        
        sub_42f5d6(ebp_1[4], ebp_1[-5])
        void* ecx_49 = ebp_1[3]
        ebp_1[-5] = 0
        
        if (sub_42f54b(ecx_49, ebp_1[-0x13], nullptr) s>= 0)
            int32_t edi_11 = ebp_1[-0x10]
            
            if (sub_42f54b(ebp_1[3], edi_11, nullptr) s>= 0
                    && sub_42f442(ebp_1[3], &ebp_1[-0x16], 4, &ebp_1[4]) s>= 0
                    && sub_42f442(ebp_1[3], &ebx[0xa], 4, nullptr) s>= 0)
                sub_42f5d6(ebp_1[3], ebp_1[-6])
                void* ecx_54 = ebp_1[-2]
                ebx[8] = ebp_1[-0x14]
                int32_t eax_74 = ebp_1[-0x12]
                ebp_1[-6] = 0
                ebx[9] = eax_74
                ebx[0x10] = ebp_1[-0x13]
                ebx[0x11] = ebp_1[4]
                ebx[0xb] = ebp_1[-8]
                ebx[0xf] = edi_11
                ebx[0xd] = *(ecx_54 + 0x34c)
                ebx[0xe] = *(ebp_1[2] + 0x14) + 0x10
                *(ecx_54 + 0x34c) = ebx
                ebx = nullptr
                *(ecx_54 + 0x328) += 1
        
        goto label_4363f7
    
    sub_42aba3(ebp_1[-2] + 0x28, ebp_1[-7], 0, 
        "ID3DXEffectCompiler: There was a problem in the parse tree")
else
    var_a4_2 = "ID3DXEffectCompiler: There was a problem getting variable type"
    int32_t var_a8_2 = 0
    var_ac_2 = ecx_10 + 0x10
    var_b0_2 = arg1 + 0x28
label_435ff9:
    sub_42aba3(var_b0_2, var_ac_2, 0, var_a4_2)
label_4363f7:
    void* ecx_55 = ebp_1[-3]
    
    if (ecx_55 != 0)
        sub_42f421(ecx_55, 1)
void* ecx_56 = ebp_1[-4]

if (ecx_56 != 0)
    sub_42f421(ecx_56, 1)

void* ecx_57 = ebp_1[-6]

if (ecx_57 != 0)
    sub_42f421(ecx_57, 1)

void* ecx_58 = ebp_1[-5]

if (ecx_58 != 0)
    sub_42f421(ecx_58, 1)

if (ebx != 0)
    sub_433cd7(ebx, 1)

if (ebp_1[-0xa] != 0)
    j__free(ebp_1[-0xa])

*ebp_1
