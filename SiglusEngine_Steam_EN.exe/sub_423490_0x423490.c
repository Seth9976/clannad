// 函数: sub_423490
// 地址: 0x423490
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_13125b4 == 0 || data_13701cc == 0)
    return 

char var_7_1 = 1
sub_422ec0()
int32_t eax_1 = data_1312790
char var_5_1 = 0
int32_t edx_1

if (eax_1 != 0xffffffff || data_1312794 != eax_1)
    int32_t ecx_1 = data_1312794
    edx_1.b = 1
    data_1312768 = 0
    var_5_1 = 1
    
    if (ecx_1 == 0xffffffff)
        if (eax_1 != 0xffffffff)
            if (eax_1 == 1)
                sub_422e10()
                data_13128f8 = 2
                edx_1.b = var_5_1
            else if (eax_1 == 3)
                if (data_131278c == 3 && (data_13702a4 != 0 || data_13702a1 != 0))
                    int32_t ecx_6 = data_13126e8
                    int32_t eax_11
                    edx_1:eax_11 = sx.q(ecx_6)
                    data_13126fc += neg.d(ecx_6) - ((eax_11 - edx_1) s>> 1)
                    edx_1.b = var_5_1
            else if (eax_1 == 4 && data_131278c == 4
                    && (data_13702a4 != eax_1 - 4 || data_13702a1 != (eax_1 - 4).b))
                int32_t eax_6
                edx_1:eax_6 = sx.q(data_13126e8)
                data_13126fc += ((eax_6 - edx_1) s>> 1) + data_13126e8
                edx_1.b = var_5_1
    else if (ecx_1 == 5)
        sub_422db0()
        edx_1.b = var_5_1
    else if (ecx_1 == 6)
        sub_422de0()
        edx_1.b = var_5_1
    else if (ecx_1 == 7)
        int32_t ecx_5 = data_13126e8
        int32_t edx_2
        edx_2.b = data_13126ec == 0
        data_13126ec = edx_2
        sub_422710(ecx_5, edx_2)
        data_1312720 = 1
        edx_1.b = var_5_1
else
    sub_423120()
    edx_1.b = var_5_1

char var_6_1 = 0

if (data_131274c == 2 || data_1312768 != 0)
    var_6_1 = 1
    data_1312724 = 2
else if (edx_1.b == 0)
    sub_423380()

if (data_137027e != 0 || data_137030e != 0 || data_1312794 == 2)
    sub_422c40()
    return 

int32_t eax_14 = data_1312704

if (data_13126fc s< eax_14)
    data_1312768 = 0
    data_13126fc = eax_14
else
    eax_14 = data_1312708
    
    if (data_13126fc s> eax_14)
        data_1312768 = 0
        data_13126fc = eax_14

sub_422e80()
int32_t eax_15 = data_13126fc

if (data_1312700 == eax_15)
    goto label_42366e

bool cond:1_1 = data_702fc0 == 0
data_1312700 = eax_15
data_1312720 = 1
int32_t ecx_9

if (cond:1_1)
label_423677:
    sub_422630()
    ecx_9 = 2
    data_1312724 = 2
else
    sub_422820()
label_42366e:
    
    if (data_1312720 != 0)
        goto label_423677
    
    ecx_9 = data_1312724

char eax_16 = 1

if (var_6_1 != 0)
    eax_16 = 0

char eax_17 = eax_16

if (ecx_9 == 2)
    eax_17 = 0

char eax_18 = eax_17

if (var_5_1 != 0)
    eax_18 = 0

sub_422ae0(eax_18)

if (var_6_1 == 0 && var_5_1 == 0)
    sub_423440()

if (data_13702a0 == 0)
    data_1312778 = 0
    return 

if (data_1312778 == 0)
    data_1312778 = 1
