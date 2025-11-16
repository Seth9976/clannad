// 函数: sub_422290
// 地址: 0x422290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* const __return_addr_1 = __return_addr
data_13132b0 = arg1
data_13132b4 = arg2
sub_41ff20()
int32_t edi = data_13701b8
int32_t var_30 = edi
data_13126e0 = edi

if (edi s< 0x3e8 && *(data_13701cc + (data_13701b4 << 3) + 4) != 0)
    edi += 1
    var_30 = edi
    data_13126e0 = edi

bool cond:0 = data_1312570 != 0
data_1312740 = 0
data_1312744 = 0
data_1312748 = 0
void* var_34
void* var_18
void* var_14
int32_t eax_14
int32_t* ecx_7
int32_t* edx_3
void* var_3c

if (cond:0)
    void* ecx_11
    
    if (data_131257c s<= 0 || data_1312580 s<= 0 || data_1312584 != 2)
    label_42247e:
        ecx_11 = var_3c
        var_14 = var_3c
        var_34 = var_3c
    else
        int32_t* eax_19 = data_1312574
        
        if (*eax_19 s<= 0)
            goto label_42247e
        
        int32_t ecx_9 = eax_19[1]
        
        if (ecx_9 == 0 || eax_19[2] == 0)
            goto label_42247e
        
        void* eax_20 = eax_19 + ecx_9
        
        if (eax_19 == neg.d(ecx_9))
            goto label_42247e
        
        var_34 = eax_20 + 0xd0
        ecx_11 = *(eax_20 + 0x1c)
        var_14 = *(eax_20 + 0x20)
    
    var_18 = ecx_11
    int32_t eax_25
    int32_t edx_7
    edx_7:eax_25 = sx.q(arg1)
    int32_t eax_27
    int32_t edx_9
    edx_9:eax_27 = sx.q(arg1)
    edx_3 = &data_1312590
    eax_14 = ((eax_27 - edx_9) s>> 1) + 2 + (((edx_7 & 3) + eax_25) s>> 2) + arg1
    ecx_7 = &data_1312570
else
    void* ecx_3
    
    if (data_13740b0 == 0 || data_13740bc s<= 0 || data_13740c0 s<= 0 || data_13740c4 != 2)
    label_422379:
        ecx_3 = var_3c
        var_14 = var_3c
        var_34 = var_3c
    else
        int32_t* eax_2 = data_13740b4
        
        if (*eax_2 s<= 0)
            goto label_422379
        
        int32_t ecx_1 = eax_2[1]
        
        if (ecx_1 == 0 || eax_2[2] == 0)
            goto label_422379
        
        void* eax_3 = eax_2 + ecx_1
        
        if (eax_2 == neg.d(ecx_1))
            goto label_422379
        
        var_34 = eax_3 + 0xd0
        ecx_3 = *(eax_3 + 0x1c)
        var_14 = *(eax_3 + 0x20)
    
    var_18 = ecx_3
    int32_t eax_8
    int32_t edx
    edx:eax_8 = sx.q(arg1)
    int32_t eax_10
    int32_t edx_2
    edx_2:eax_10 = sx.q(arg1)
    edx_3 = &data_13740c8
    eax_14 = ((eax_10 - edx_2) s>> 1) + 2 + (((edx & 3) + eax_8) s>> 2) + arg1
    ecx_7 = &data_13740b0

if (var_14 s> eax_14)
    ecx_7 = edx_3

void* eax_17
void* edx_6

if (*ecx_7 == 0 || ecx_7[3] s<= 0 || ecx_7[4] s<= 0 || ecx_7[5] != 2)
    edx_6 = var_18
    eax_17 = var_14
else
    int32_t* eax_15 = ecx_7[1]
    
    if (*eax_15 s<= 0)
        edx_6 = var_18
        eax_17 = var_14
    else
        int32_t edx_4 = eax_15[1]
        
        if (edx_4 == 0 || eax_15[2] == 0)
            edx_6 = var_18
            eax_17 = var_14
        else
            void* eax_16 = eax_15 + edx_4
            
            if (eax_15 == neg.d(edx_4))
                edx_6 = var_18
                eax_17 = var_14
            else
                var_34 = eax_16 + 0xd0
                edx_6 = *(eax_16 + 0x1c)
                eax_17 = *(eax_16 + 0x20)
                var_14 = eax_17

int32_t* eax_18

if (var_34 == 0 || edx_6 s<= 0 || eax_17 s<= 0)
    eax_18 = nullptr
    edx_6 = nullptr
else
    eax_18 = ecx_7
    data_1312744 = edx_6
    data_1312740 = eax_18
    data_1312748 = var_14

void* ecx_15 = 0x24
void* var_3c_1 = 0x24

if (eax_18 != 0)
    if (edx_6 + 8 s> 0x24)
        ecx_15 = edx_6 + 8
    
    var_3c_1 = ecx_15

int32_t edx_10 = 0
data_13126ec = arg2
int32_t eax_34 = data_13126d8 - 0x24
data_13126e8 = arg1
int32_t esi_1 = data_13701b0
data_13126f0 = ecx_15
data_13126f4 = 0
data_13126f8 = eax_34
int32_t var_34_1 = 0
int32_t var_18_1 = 0xffffffff
var_14.b = 1
int32_t var_38_1 = 0

if (edi s> 0)
    while (true)
        int32_t eax_35 = data_13701cc
        int32_t* edi_1 = *(eax_35 + (esi_1 << 3) + 4)
        int32_t var_64_1 = edx_10
        edx_10.b = 0
        sub_421950(eax_35, edx_10.b, edi_1, ecx_15, var_34_1, var_64_1, var_18_1, eax_34, arg1, 
            var_14.b)
        esi_1 += 1
        edx_10 = edi_1[8]
        var_34_1 = edi_1[0xa]
        var_18_1 = edi_1[0xb]
        var_14.b = 0
        
        if (esi_1 == 0x3e8)
            esi_1 = 0
        
        int32_t eax_38 = data_13126e0
        int32_t ecx_18 = var_38_1 + 1
        var_30 = eax_38
        var_38_1 = ecx_18
        
        if (ecx_18 s>= eax_38)
            break
        
        ecx_15 = var_3c_1
    
    esi_1 = data_13701b0

int32_t eax_39 = data_13126dc
data_13126e4 = edx_10
int32_t eax_40
int32_t edx_11
edx_11:eax_40 = sx.q(eax_39)
int32_t eax_42 = (eax_40 - edx_11) s>> 1
int32_t ecx_19
ecx_19.b = var_30 s>= 2
int32_t eax_49
int32_t edx_14
edx_14:eax_49 = sx.q(data_13126dc)
int32_t ecx_23 =
    *(*(data_13701cc + (mods.dp.d(sx.q(esi_1 - (ecx_19 + 1) + var_30), 0x3e8) << 3) + 4) + 0x1c)
    - eax_42
int32_t eax_52 = neg.d((eax_49 - edx_14) s>> 1)
data_1312704 = eax_52

if (ecx_23 s< eax_52)
    ecx_23 = eax_52

data_13126fc = ecx_23
data_1312700 = ecx_23
int32_t result =
    *(*(data_13701cc + (mods.dp.d(sx.q(var_30 - 1 + esi_1), 0x3e8) << 3) + 4) + 0x20) - eax_42
bool cond:3 = data_702fc0 == 0
data_1312708 = result
data_131274c = 0
data_1312768 = 0

if (cond:3)
    return result

return sub_422820()
