// 函数: sub_40ab1d
// 地址: 0x40ab1d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
float esi
float var_cc = esi
int32_t edi
int32_t var_d0 = edi
void*** var_14 = nullptr
int32_t* var_1c = nullptr
int32_t* var_18 = nullptr
int32_t* var_2c = nullptr
int32_t* var_24 = nullptr
int32_t* var_28 = nullptr

if (arg5 == 0)
    arg5 = &var_2c

if (arg6 == 0)
    arg6 = &var_24

if (arg7 == 0)
    arg7 = &var_28

void var_74

if (arg8 == 0)
    arg8 = &var_74
int32_t* esp_1 = &var_d0
int32_t* result = sub_462ce9(&var_14)

if (result s>= 0)
    void*** eax_1 = var_14
    void** ecx_1 = *eax_1
    int32_t var_d4_1 = 0xcce
    char* var_d8 = "xof 0302bin 0064"
    esp_1 = &var_d8
    result = ecx_1[5](eax_1)
    
    if (result s>= 0)
        void*** eax_3 = var_14
        int32_t var_dc_2 = 0xc98
        char const* const var_e0_1 = "xof 0303txt 0032        template XSkinMeshHeader         {             "
        "<3CF169CE-FF7C-44ab-93C0-F78F62D172E2>             WORD nMaxSkinWeightsPerVertex;             "
        "WORD nMaxSkinWeightsPerFace;             WORD nBones;         }         template "
        "VertexDuplicationIndices         {             <B8D65549-D"
        esp_1 = &var_d8
        result = (*eax_3)[5](eax_3, 
            "xof 0303txt 0032        template XSkinMeshHeader         {             "
        "<3CF169CE-FF7C-44ab-93C0-F78F62D172E2>             WORD nMaxSkinWeightsPerVertex;             "
        "WORD nMaxSkinWeightsPerFace;             WORD nBones;         }         template "
        "VertexDuplicationIndices         {             <B8D65549-D", 
            0xc98)
        
        if (result s>= 0)
            void*** eax_5 = var_14
            int32_t var_dc_3 = 0x65b
            char const* const var_e0_2 = "xof 0303txt 0032        template FVFData         {             "
            "<B6E70A0E-8EF9-4e83-94AD-ECC8B0C04897>             DWORD dwFVF;             DWORD"
            esp_1 = &var_d8
            result = (*eax_5)[5](eax_5, 
                "xof 0303txt 0032        template FVFData         {             "
            "<B6E70A0E-8EF9-4e83-94AD-ECC8B0C04897>             DWORD dwFVF;             DWORD", 
                0x65b)
            
            if (result s>= 0)
                void*** eax_7 = var_14
                esp_1 = &var_d8
                result = (*eax_7)[3](eax_7, arg1, arg2, &var_1c)
                
                if (result s>= 0)
                    *arg9 = 0
                    int32_t* eax_10 = var_1c
                    int32_t var_30
                    (*(*eax_10 + 0x10))(eax_10, &var_30)
                    esp_1 = &var_d8
                    int32_t var_20_1 = 0
                    
                    if (var_30 u> 0)
                        do
                            int32_t* eax_11 = var_1c
                            esp_1 = &var_d8
                            result = (*(*eax_11 + 0x14))(eax_11, var_20_1, &var_18)
                            
                            if (result s< 0)
                                goto label_40ad73
                            
                            float var_38_1 = fconvert.s(float.t(0))
                            float var_3c_1 = fconvert.s(float.t(0))
                            float var_40_1 = fconvert.s(float.t(0))
                            float var_44_1 = fconvert.s(float.t(0))
                            float var_4c_1 = fconvert.s(float.t(0))
                            float var_50_1 = fconvert.s(float.t(0))
                            int32_t* var_fc_1 = var_18
                            float var_54_1 = fconvert.s(float.t(0))
                            float var_58_1 = fconvert.s(float.t(0))
                            float var_60_1 = fconvert.s(float.t(0))
                            float var_64_1 = fconvert.s(float.t(0))
                            float var_68_1 = fconvert.s(float.t(0))
                            float var_6c_1 = fconvert.s(float.t(0))
                            float var_34_1 = fconvert.s(float.t(1))
                            float var_48_1 = fconvert.s(float.t(1))
                            float var_5c_1 = fconvert.s(float.t(1))
                            float var_70 = fconvert.s(float.t(1))
                            esp_1 = &var_d8
                            result = sub_40a6ee(var_fc_1, &var_70, arg3, arg4, arg9, arg5, arg6, 
                                arg7, arg8)
                            
                            if (result s< 0)
                                goto label_40ad73
                            
                            int32_t* eax_14 = var_18
                            
                            if (eax_14 != 0)
                                (*(*eax_14 + 8))(eax_14)
                                esp_1 = &var_d8
                                var_18 = nullptr
                            
                            var_20_1 += 1
                        while (var_20_1 u< var_30)
                    
                    if (*arg9 == 0)
                        result = 0x80004005
                    else if (*arg8 == 0)
                        long double x87_r7_17 = fconvert.t(0.5f)
                        int32_t var_84_1 = 0
                        int32_t var_dc_9 = 0x11
                        float var_c8
                        __builtin_memset(&var_c8, 0, 0x44)
                        var_c8 = fconvert.s(x87_r7_17)
                        float var_c4 = fconvert.s(x87_r7_17)
                        float var_c0_1 = fconvert.s(x87_r7_17)
                        float var_a8_1 = var_c8
                        void var_a4
                        void* edi_1 = &var_a4
                        float* esi_1 = &var_c4
                        *edi_1 = *esi_1
                        void* edi_2 = edi_1 + 4
                        void* esi_2 = &esi_1[1]
                        *edi_2 = *esi_2
                        *(edi_2 + 4) = *(esi_2 + 4)
                        int32_t var_e0_7 = 1
                        esp_1 = &var_d8
                        result = sub_45edd0(&var_c8, 1, arg6)
                        
                        if (result s>= 0)
                            esp_1 = &var_d8
                            void var_80
                            result = sub_407f4d(&var_c8, &var_80)
                            
                            if (result s>= 0)
                                int32_t var_e0_9 = 1
                                result = sub_45efa3(&var_80, 1, arg7)
                                sub_407a15(&var_80)
                                esp_1 = &var_d8
                                
                                if (result s>= 0)
                                    *arg8 = 1

label_40ad73:
int32_t* eax_22 = var_2c

if (eax_22 != 0)
    int32_t ecx_8 = *eax_22
    *(esp_1 - 4) = eax_22
    (*(ecx_8 + 8))()
    var_2c = nullptr

int32_t* eax_23 = var_24

if (eax_23 != 0)
    int32_t ecx_9 = *eax_23
    *(esp_1 - 4) = eax_23
    (*(ecx_9 + 8))()
    var_24 = nullptr

int32_t* eax_24 = var_28

if (eax_24 != 0)
    int32_t ecx_10 = *eax_24
    *(esp_1 - 4) = eax_24
    (*(ecx_10 + 8))()
    var_28 = nullptr

int32_t* eax_25 = var_18

if (eax_25 != 0)
    int32_t ecx_11 = *eax_25
    *(esp_1 - 4) = eax_25
    (*(ecx_11 + 8))()
    var_18 = nullptr

int32_t* eax_26 = var_1c

if (eax_26 != 0)
    int32_t ecx_12 = *eax_26
    *(esp_1 - 4) = eax_26
    (*(ecx_12 + 8))()
    var_1c = nullptr

void*** eax_27 = var_14

if (eax_27 != 0)
    void** ecx_13 = *eax_27
    *(esp_1 - 4) = eax_27
    ecx_13[2]()

*esp_1
esp_1[1]
return result
