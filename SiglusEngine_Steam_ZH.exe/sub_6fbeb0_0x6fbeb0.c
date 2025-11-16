// 函数: sub_6fbeb0
// 地址: 0x6fbeb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ce2ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int128_t* var_a4
int32_t var_1c = __security_cookie ^ &var_a4
int32_t ebx
int32_t var_a8 = ebx
int32_t esi
int32_t var_ac = esi
int32_t edi
int32_t var_b0 = edi
int32_t eax_4 = __security_cookie ^ &var_b0
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_84 = arg1
int32_t* var_80 = arg2
int32_t edx = *arg2
int32_t* ebx_1 = *(edx + (arg3 << 3))
void* eax_7 = *(edx + (arg3 << 3) + 4)
int32_t* var_68 = ebx_1
void* var_7c = eax_7
void* var_64 = eax_7

if (eax_7 != 0)
    *(eax_7 + 4) += 1

int32_t var_c_1 = 0
int32_t var_98_1 = arg4 * 0x50 + ebx_1[1]
int32_t* eax_12 = *ebx_1
(*(*eax_12 + 0x18))(eax_12, eax_4)
int32_t eax_14 = (*(*arg5 + 0xf0))(arg5, "tech")
char var_18
int32_t result
void var_f0
void var_d8

if (eax_14 s>= 0)
    int32_t eax_17 = (*(*arg5 + 0x98))(arg5, "mView", *(arg1 + 0x14))
    int32_t var_a8_2 = eax_17
    
    if (eax_17 s>= 0)
        int32_t eax_21 = (*(*arg5 + 0x98))(arg5, "mProj", *(arg1 + 0x14) + 0x40)
        var_a8_2 = eax_21
        
        if (eax_21 s< 0)
            void* var_ac_3 = &var_d8
            sub_52e820(&var_d8, u"SetMatrix")
            char var_18_3 = 3
            goto label_6fbfec
        
        int32_t var_a0
        int32_t* var_c4_3 = &var_a0
        char const* const var_c8_3 = "g_CameraWorldPos"
        void* eax_23 = *(*(arg1 + 0x14) + 0x18e8)
        int32_t xmm1_1 = *(eax_23 + 8)
        int32_t xmm2_1 = *(eax_23 + 0xc)
        int32_t eax_24 = *arg5
        var_a0 = *(eax_23 + 4)
        int32_t var_9c_1 = xmm1_1
        int32_t var_98_2 = xmm2_1
        int32_t var_94_1 = 0x3f800000
        int32_t eax_25 = (*(eax_24 + 0x88))(arg5, var_c8_3, var_c4_3)
        var_a8_2 = eax_25
        
        if (eax_25 s< 0)
            void* var_ac_4 = &var_d8
            sub_52e820(&var_d8, u"SetVector")
            char var_18_4 = 4
            goto label_6fbfec
        
        *(*(arg1 + 0x14) + 0x18e8)
        void* var_8c
        int32_t esi_3 = (*(*arg5 + 0x88))(arg5, "g_CameraLocalPos", 
            sub_6ff500(&var_84, *(var_8c + 0x34) + 0x50))
        int16_t* var_f4_2
        void* ecx_45
        
        if (esi_3 s>= 0)
            void* var_90
            void* eax_31 = *(var_90 + 0x14)
            int32_t* esi_4 = *(eax_31 + 0x18f0)
            int32_t var_ac_6
            void var_6c
            
            if (esi_4 != *(eax_31 + 0x18f4))
                while (true)
                    void* eax_32 = *esi_4
                    
                    if (*(eax_32 + 4) == 0)
                        int32_t xmm1_2 = *(eax_32 + 0x40)
                        int32_t xmm2_2 = *(eax_32 + 0x44)
                        int32_t eax_33 = *arg5
                        int32_t* var_c4_6 = &var_a0
                        char const* const var_c8_6 = "g_LightWorldDir"
                        var_a0 = *(eax_32 + 0x3c)
                        int32_t var_9c_2 = xmm1_2
                        int32_t var_98_3 = xmm2_2
                        int32_t var_94_2 = 0x3f800000
                        int32_t eax_34 = (*(eax_33 + 0x88))(arg5, var_c8_6, var_c4_6)
                        var_ac_6 = eax_34
                        
                        if (eax_34 s< 0)
                            void* var_a8_5 = &var_d8
                            sub_52e820(&var_d8, u"SetVector")
                            char var_18_8 = 6
                            break
                        
                        j_sub_4026d0(&var_6c, 0, *(var_8c + 0x34) + 0x50)
                        j_sub_40176d(&var_84, eax_32 + 0x3c, &var_6c)
                        j_sub_4014e9(&var_84, &var_84)
                        int32_t eax_39 = (*(*arg5 + 0x88))(arg5, "g_LightLocalDir", &var_84)
                        var_a8_2 = eax_39
                        
                        if (eax_39 s< 0)
                            void* var_ac_8 = &var_d8
                            sub_52e820(&var_d8, u"SetVector")
                            char var_18_7 = 7
                            goto label_6fbfec
                    
                    esi_4 = &esi_4[2]
                    
                    if (esi_4 == *(*(var_90 + 0x14) + 0x18f4))
                        goto label_6fc1e9
                
                goto label_6fc29d
            
        label_6fc1e9:
            int128_t* esi_5 = var_a4
            
            if (ebx_1[0x19].b == 0)
            label_6fc2d4:
                var_a0.o = *esi_5
                int32_t eax_47 = (*(*arg5 + 0x88))(arg5, "g_MaterialDiffuse", &var_a0)
                var_ac_6 = eax_47
                int16_t* var_f4_1
                void* ecx_37
                
                if (eax_47 s>= 0)
                    var_a0.o = esi_5[1]
                    int32_t eax_49 = (*(*arg5 + 0x88))(arg5, "g_MaterialAmbient", &var_a0)
                    var_ac_6 = eax_49
                    
                    if (eax_49 s< 0)
                        void* var_a8_7 = &var_d8
                        sub_52e820(&var_d8, u"SetVector")
                        char var_18_10 = 0xa
                        goto label_6fc29d
                    
                    var_a0.o = esi_5[2]
                    int32_t eax_51 = (*(*arg5 + 0x88))(arg5, "g_MaterialSpecular", &var_a0)
                    var_ac_6 = eax_51
                    
                    if (eax_51 s< 0)
                        void* var_a8_8 = &var_d8
                        sub_52e820(&var_d8, u"SetVector")
                        char var_18_11 = 0xb
                        goto label_6fc29d
                    
                    var_a0.o = esi_5[3]
                    int32_t eax_53
                    int32_t ecx_24
                    eax_53, ecx_24 = (*(*arg5 + 0x88))(arg5, "g_MaterialEmissive", &var_a0)
                    var_ac_6 = eax_53
                    
                    if (eax_53 s< 0)
                        void* var_a8_9 = &var_d8
                        sub_52e820(&var_d8, u"SetVector")
                        char var_18_12 = 0xc
                        goto label_6fc29d
                    
                    int32_t var_c4_16 = ecx_24
                    int32_t eax_55
                    int32_t ecx_26
                    eax_55, ecx_26 = (*(*arg5 + 0x78))(arg5, "g_MaterialSpecularPower", esi_5[4].d)
                    esi_3 = eax_55
                    
                    if (esi_3 s< 0)
                        void* var_ac_9 = &var_d8
                        sub_52e820(&var_d8, u"SetFloat")
                        char var_18_13 = 0xd
                        goto label_6fc76a
                    
                    if (ebx_1[0x27].b != 0)
                        int32_t var_c4_18 = ecx_26
                        esi_3 = (*(*arg5 + 0x78))(arg5, "g_VertexColorRate", ebx_1[0x28])
                    
                    if (ebx_1[0x27].b != 0 && esi_3 s< 0)
                        void* var_ac_10 = &var_d8
                        sub_52e820(&var_d8, u"SetFloat")
                        char var_18_14 = 0xe
                        goto label_6fc76a
                    
                    if (*(ebx_1 + 0x65) != 0)
                        esi_3 = (*(*arg5 + 0x88))(arg5, "g_C0", &ebx_1[0x1a])
                    
                    if (*(ebx_1 + 0x65) != 0 && esi_3 s< 0)
                        void* var_ac_11 = &var_d8
                        sub_52e820(&var_d8, u"SetVector")
                        char var_18_15 = 0xf
                        goto label_6fc76a
                    
                    if (ebx_1[0x1e].b != 0)
                        esi_3 = (*(*arg5 + 0x88))(arg5, "g_C1", &ebx_1[0x1f])
                        
                        if (esi_3 s< 0)
                            void* var_ac_12 = &var_d8
                            sub_52e820(&var_d8, u"SetVector")
                            char var_18_16 = 0x10
                            goto label_6fc76a
                        
                        esi_3 = (*(*arg5 + 0x88))(arg5, "g_C2", &ebx_1[0x23])
                        
                        if (esi_3 s< 0)
                            void* var_ac_13 = &var_d8
                            sub_52e820(&var_d8, u"SetVector")
                            char var_18_17 = 0x11
                            goto label_6fc76a
                    
                    if (ebx_1[0x16] == 1)
                        int32_t ecx_35 = *(*(var_90 + 0x14) + 0x19fc)
                        
                        if (ecx_35 != 0)
                            int32_t eax_66
                            eax_66, ecx_35 = (*(*arg5 + 0xd0))(arg5, "shadowtexture", ecx_35)
                            var_ac_6 = eax_66
                            
                            if (eax_66 s< 0)
                                void* var_a8_10 = &var_d8
                                sub_52e820(&var_d8, u"SetTexture")
                                char var_18_18 = 0x12
                                ecx_37 = &var_f0
                                var_f4_1 = &data_b07d94
                                goto label_6fc2a4
                        
                        int32_t var_c4_24 = ecx_35
                        int32_t eax_68 = (*(*arg5 + 0x78))(arg5, "g_DBSBias", ebx_1[0x29])
                        var_ac_6 = eax_68
                        
                        if (eax_68 s< 0)
                            void* var_a8_11 = &var_d8
                            sub_52e820(&var_d8, u"SetFloat")
                            char var_18_19 = 0x13
                            goto label_6fc29d
                        
                        int32_t eax_69 = *(var_90 + 0x14)
                        j_sub_4021aa(&var_6c, eax_69 + 0x190c, eax_69 + 0x194c)
                        int32_t eax_72 = (*(*arg5 + 0x98))(arg5, "mLightVP", &var_6c)
                        var_ac_6 = eax_72
                        
                        if (eax_72 s< 0)
                            void* var_a8_12 = &var_d8
                            sub_52e820(&var_d8, u"SetMatrix")
                            char var_18_20 = 0x14
                            goto label_6fc29d
                        
                        esi_3 = (*(*arg5 + 0x98))(arg5, "mScaleBias", *(var_90 + 0x14) + 0x198c)
                        
                        if (esi_3 s< 0)
                            void* var_ac_14 = &var_d8
                            sub_52e820(&var_d8, u"SetMatrix")
                            char var_18_21 = 0x15
                            goto label_6fc76a
                    
                    if (ebx_1[0x15] == 5)
                        int32_t* ecx_43 = ebx_1[0x2f]
                        
                        if (ecx_43 != 0 && *ecx_43 != 0)
                            esi_3 = (*(*arg5 + 0xd0))(arg5, "toontexture", *ecx_43)
                            
                            if (esi_3 s< 0)
                                void* var_ac_15 = &var_d8
                                sub_52e820(&var_d8, u"SetTexture")
                                char var_18_22 = 0x16
                                ecx_45 = &var_f0
                                var_f4_2 = &data_b07d94
                                goto label_6fc771
                    
                    result = ebx_1[0x15]
                    
                    if (result == 8 || result == 9)
                        int32_t* ecx_46 = ebx_1[0x31]
                        
                        if (ecx_46 != 0 && *ecx_46 != 0)
                            esi_3 = (*(*arg5 + 0xd0))(arg5, "normaltexture", *ecx_46)
                            
                            if (esi_3 s< 0)
                                void* var_ac_16 = &var_d8
                                sub_52e820(&var_d8, u"SetTexture")
                                char var_18_23 = 0x17
                                ecx_45 = &var_f0
                                var_f4_2 = &data_b07d94
                                goto label_6fc771
                    
                    if ((ebx_1[0x17].b & 1) == 0)
                        ebx_1.b = 1
                    else
                        int32_t eax_80
                        int32_t ecx_49
                        eax_80, ecx_49 = (*(*arg5 + 0x88))(arg5, "g_RimLightColor", &ebx_1[0x2a])
                        esi_3 = eax_80
                        
                        if (esi_3 s< 0)
                            void* var_ac_17 = &var_d8
                            sub_52e820(&var_d8, u"SetVector")
                            char var_18_24 = 0x18
                            goto label_6fc76a
                        
                        int32_t var_c4_32 = ecx_49
                        esi_3 = (*(*arg5 + 0x78))(arg5, "g_RimLightPower", ebx_1[0x2e])
                        
                        if (esi_3 s< 0)
                            void* var_ac_18 = &var_d8
                            sub_52e820(&var_d8, u"SetFloat")
                            char var_18_25 = 0x19
                            goto label_6fc76a
                        
                        ebx_1.b = 1
                else
                    void* var_a8_6 = &var_d8
                    sub_52e820(&var_d8, u"SetVector")
                    char var_18_9 = 9
                label_6fc29d:
                    ecx_37 = &var_f0
                    var_f4_1 = &data_b07ddc
                label_6fc2a4:
                    int16_t* eax_45
                    int32_t edx_6
                    eax_45, edx_6 = sub_52e820(ecx_37, var_f4_1)
                    var_18 = 0
                    sub_6f1ae0(eax_45, edx_6, var_ac_6)
                    ebx_1.b = 0
            else
                int32_t* ecx_14 = *(esi_5 + 0x44)
                
                if (ecx_14 == 0)
                    goto label_6fc2d4
                
                int32_t eax_43 = (*(*arg5 + 0xd0))(arg5, "meshtexture", *ecx_14)
                
                if (eax_43 s>= 0)
                    goto label_6fc2d4
                
                void* var_a8_4 = &var_d8
                sub_52e820(&var_d8, u"SetTexture")
                char var_18_6 = 8
                int16_t* eax_44
                int32_t edx_5
                eax_44, edx_5 = sub_52e820(&var_f0, &data_b07d94)
                var_18 = 0
                sub_6f1ae0(eax_44, edx_5, eax_43)
                ebx_1.b = 0
        else
            void* var_ac_5 = &var_d8
            sub_52e820(&var_d8, u"SetVector")
            char var_18_5 = 5
        label_6fc76a:
            ecx_45 = &var_f0
            var_f4_2 = &data_b07ddc
        label_6fc771:
            int16_t* eax_82
            int32_t edx_7
            eax_82, edx_7 = sub_52e820(ecx_45, var_f4_2)
            var_18 = 0
            sub_6f1ae0(eax_82, edx_7, esi_3)
            ebx_1.b = 0
    else
        void* var_ac_2 = &var_d8
        sub_52e820(&var_d8, u"SetMatrix")
        char var_18_2 = 2
    label_6fbfec:
        int16_t* eax_18
        int32_t edx_2
        eax_18, edx_2 = sub_52e820(&var_f0, &data_b07ddc)
        var_18 = 0
        sub_6f1ae0(eax_18, edx_2, var_a8_2)
        ebx_1.b = 0
else
    void* var_ac_1 = &var_d8
    sub_52e820(&var_d8, u"SetTechnique")
    char var_18_1 = 1
    int16_t* eax_15
    int32_t edx_1
    eax_15, edx_1 = sub_52e820(&var_f0, &data_b07e20)
    var_18 = 0
    sub_6f1ae0(eax_15, edx_1, eax_14)
    ebx_1.b = 0
var_18.d = 0xffffffff
int32_t* var_88

if (var_88 != 0)
    bool cond:0_1 = var_88[1] != 1
    var_88[1]
    var_88[1] -= 1
    
    if (not(cond:0_1))
        (*(*var_88 + 4))()
        int32_t edi_2 = var_88[2]
        var_88[2] -= 1
        
        if (edi_2 == 1)
            (*(*var_88 + 8))()

result.b = ebx_1.b
int32_t var_20
fsbase->NtTib.ExceptionList = var_20
int32_t var_28
sub_745f2b(var_28 ^ &var_b0)
return result
