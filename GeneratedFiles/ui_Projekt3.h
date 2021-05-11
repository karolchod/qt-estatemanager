/********************************************************************************
** Form generated from reading UI file 'Projekt3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJEKT3_H
#define UI_PROJEKT3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Projekt3
{
public:
    QWidget *centralWidget;
    QGroupBox *SklepgroupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_13;
    QSpinBox *KasyspinBox;
    QSpinBox *RegalyspinBox;
    QCheckBox *BramkicheckBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *AddLokalUz;
    QPushButton *AddSklep;
    QPushButton *AddMiesz;
    QGroupBox *MieszkaniegroupBox;
    QGroupBox *MieszkancygroupBox;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_21;
    QLabel *LiczbaMieszkancowLabel;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *PrevMiesz;
    QLabel *NrMieszkanca;
    QPushButton *nextMiesz;
    QFormLayout *MieszkformLayout_3;
    QLabel *label_17;
    QLineEdit *ImielineEdit;
    QLabel *label_18;
    QLineEdit *NazwiskolineEdit;
    QLabel *label_19;
    QSpinBox *WiekspinBox;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *MieszkaniecsavepushButton;
    QPushButton *dodMieszkButton;
    QPushButton *UsMieszButton;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_20;
    QSpinBox *NumerspinBox;
    QLabel *label_22;
    QSpinBox *PowierzchniaspinBox;
    QGroupBox *OplatygroupBox;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_24;
    QLabel *label_25;
    QSpinBox *KwotaspinBox;
    QSpinBox *ZaleglespinBox;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget_6;
    QFormLayout *formLayout_6;
    QLabel *label_26;
    QLabel *label_27;
    QSpinBox *ScianyspinBox;
    QSpinBox *RuryspinBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *PrevLok;
    QLabel *NrObiektu;
    QPushButton *NextLok;
    QPushButton *UsunButton;
    QGroupBox *LokalgroupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *AdreslineEdit;
    QFormLayout *formLayout;
    QLabel *label_4;
    QCheckBox *TelefoncheckBox;
    QLabel *label_5;
    QCheckBox *TvcheckBox;
    QLabel *label_6;
    QSpinBox *PomieszczeniaspinBox;
    QLabel *label_7;
    QCheckBox *MonitoringcheckBox;
    QGroupBox *LokUzgroupBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *RodzajlineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *NazwalineEdit;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLabel *label_11;
    QSpinBox *ParkingspinBox;
    QSpinBox *PracownicyspinBox;
    QLabel *label;
    QGraphicsView *graphicsView;
    QGroupBox *SciezkagroupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *sciezka;
    QPushButton *Obrazbutton;
    QLabel *LoadImageLabel;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *LICZBA;
    QPushButton *ZapiszAktualnybutton;
    QLabel *KlasaLabel;
    QFrame *line;
    QFrame *line_2;
    QPushButton *FileSave;
    QPushButton *FileRead;
    QPushButton *BackButton;

    void setupUi(QMainWindow *Projekt3)
    {
        if (Projekt3->objectName().isEmpty())
            Projekt3->setObjectName(QString::fromUtf8("Projekt3"));
        Projekt3->resize(870, 700);
        Projekt3->setMinimumSize(QSize(870, 700));
        Projekt3->setMaximumSize(QSize(870, 700));
        centralWidget = new QWidget(Projekt3);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        SklepgroupBox = new QGroupBox(centralWidget);
        SklepgroupBox->setObjectName(QString::fromUtf8("SklepgroupBox"));
        SklepgroupBox->setGeometry(QRect(10, 550, 261, 131));
        gridLayoutWidget = new QWidget(SklepgroupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 211, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 0, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setWordWrap(true);

        gridLayout->addWidget(label_14, 2, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 1, 0, 1, 1);

        KasyspinBox = new QSpinBox(gridLayoutWidget);
        KasyspinBox->setObjectName(QString::fromUtf8("KasyspinBox"));

        gridLayout->addWidget(KasyspinBox, 0, 1, 1, 1);

        RegalyspinBox = new QSpinBox(gridLayoutWidget);
        RegalyspinBox->setObjectName(QString::fromUtf8("RegalyspinBox"));

        gridLayout->addWidget(RegalyspinBox, 1, 1, 1, 1);

        BramkicheckBox = new QCheckBox(gridLayoutWidget);
        BramkicheckBox->setObjectName(QString::fromUtf8("BramkicheckBox"));

        gridLayout->addWidget(BramkicheckBox, 2, 1, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 60, 521, 31));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        AddLokalUz = new QPushButton(horizontalLayoutWidget_2);
        AddLokalUz->setObjectName(QString::fromUtf8("AddLokalUz"));

        horizontalLayout_7->addWidget(AddLokalUz);

        AddSklep = new QPushButton(horizontalLayoutWidget_2);
        AddSklep->setObjectName(QString::fromUtf8("AddSklep"));

        horizontalLayout_7->addWidget(AddSklep);

        AddMiesz = new QPushButton(horizontalLayoutWidget_2);
        AddMiesz->setObjectName(QString::fromUtf8("AddMiesz"));

        horizontalLayout_7->addWidget(AddMiesz);

        MieszkaniegroupBox = new QGroupBox(centralWidget);
        MieszkaniegroupBox->setObjectName(QString::fromUtf8("MieszkaniegroupBox"));
        MieszkaniegroupBox->setGeometry(QRect(280, 140, 271, 541));
        MieszkancygroupBox = new QGroupBox(MieszkaniegroupBox);
        MieszkancygroupBox->setObjectName(QString::fromUtf8("MieszkancygroupBox"));
        MieszkancygroupBox->setGeometry(QRect(10, 90, 251, 221));
        layoutWidget_3 = new QWidget(MieszkancygroupBox);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 231, 189));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_21 = new QLabel(layoutWidget_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_9->addWidget(label_21);

        LiczbaMieszkancowLabel = new QLabel(layoutWidget_3);
        LiczbaMieszkancowLabel->setObjectName(QString::fromUtf8("LiczbaMieszkancowLabel"));

        horizontalLayout_9->addWidget(LiczbaMieszkancowLabel);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        PrevMiesz = new QPushButton(layoutWidget_3);
        PrevMiesz->setObjectName(QString::fromUtf8("PrevMiesz"));

        horizontalLayout_6->addWidget(PrevMiesz);

        NrMieszkanca = new QLabel(layoutWidget_3);
        NrMieszkanca->setObjectName(QString::fromUtf8("NrMieszkanca"));
        NrMieszkanca->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(NrMieszkanca);

        nextMiesz = new QPushButton(layoutWidget_3);
        nextMiesz->setObjectName(QString::fromUtf8("nextMiesz"));

        horizontalLayout_6->addWidget(nextMiesz);


        verticalLayout_3->addLayout(horizontalLayout_6);

        MieszkformLayout_3 = new QFormLayout();
        MieszkformLayout_3->setSpacing(6);
        MieszkformLayout_3->setObjectName(QString::fromUtf8("MieszkformLayout_3"));
        label_17 = new QLabel(layoutWidget_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        MieszkformLayout_3->setWidget(0, QFormLayout::LabelRole, label_17);

        ImielineEdit = new QLineEdit(layoutWidget_3);
        ImielineEdit->setObjectName(QString::fromUtf8("ImielineEdit"));
        ImielineEdit->setMinimumSize(QSize(137, 0));
        ImielineEdit->setMaximumSize(QSize(137, 16777215));

        MieszkformLayout_3->setWidget(0, QFormLayout::FieldRole, ImielineEdit);

        label_18 = new QLabel(layoutWidget_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        MieszkformLayout_3->setWidget(1, QFormLayout::LabelRole, label_18);

        NazwiskolineEdit = new QLineEdit(layoutWidget_3);
        NazwiskolineEdit->setObjectName(QString::fromUtf8("NazwiskolineEdit"));
        NazwiskolineEdit->setMaximumSize(QSize(137, 16777215));

        MieszkformLayout_3->setWidget(1, QFormLayout::FieldRole, NazwiskolineEdit);

        label_19 = new QLabel(layoutWidget_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        MieszkformLayout_3->setWidget(2, QFormLayout::LabelRole, label_19);

        WiekspinBox = new QSpinBox(layoutWidget_3);
        WiekspinBox->setObjectName(QString::fromUtf8("WiekspinBox"));
        WiekspinBox->setMaximumSize(QSize(137, 16777215));
        WiekspinBox->setMaximum(150);

        MieszkformLayout_3->setWidget(2, QFormLayout::FieldRole, WiekspinBox);


        verticalLayout_3->addLayout(MieszkformLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        MieszkaniecsavepushButton = new QPushButton(layoutWidget_3);
        MieszkaniecsavepushButton->setObjectName(QString::fromUtf8("MieszkaniecsavepushButton"));

        horizontalLayout_8->addWidget(MieszkaniecsavepushButton);

        dodMieszkButton = new QPushButton(layoutWidget_3);
        dodMieszkButton->setObjectName(QString::fromUtf8("dodMieszkButton"));

        horizontalLayout_8->addWidget(dodMieszkButton);

        UsMieszButton = new QPushButton(layoutWidget_3);
        UsMieszButton->setObjectName(QString::fromUtf8("UsMieszButton"));

        horizontalLayout_8->addWidget(UsMieszButton);


        verticalLayout_3->addLayout(horizontalLayout_8);

        formLayoutWidget_4 = new QWidget(MieszkaniegroupBox);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(9, 20, 251, 61));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(formLayoutWidget_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_20);

        NumerspinBox = new QSpinBox(formLayoutWidget_4);
        NumerspinBox->setObjectName(QString::fromUtf8("NumerspinBox"));
        NumerspinBox->setMaximum(99999);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, NumerspinBox);

        label_22 = new QLabel(formLayoutWidget_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_22);

        PowierzchniaspinBox = new QSpinBox(formLayoutWidget_4);
        PowierzchniaspinBox->setObjectName(QString::fromUtf8("PowierzchniaspinBox"));
        PowierzchniaspinBox->setMaximum(500);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, PowierzchniaspinBox);

        OplatygroupBox = new QGroupBox(MieszkaniegroupBox);
        OplatygroupBox->setObjectName(QString::fromUtf8("OplatygroupBox"));
        OplatygroupBox->setGeometry(QRect(9, 319, 251, 81));
        formLayoutWidget_5 = new QWidget(OplatygroupBox);
        formLayoutWidget_5->setObjectName(QString::fromUtf8("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(10, 20, 231, 57));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(formLayoutWidget_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_24);

        label_25 = new QLabel(formLayoutWidget_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_25);

        KwotaspinBox = new QSpinBox(formLayoutWidget_5);
        KwotaspinBox->setObjectName(QString::fromUtf8("KwotaspinBox"));
        KwotaspinBox->setMaximum(99999);
        KwotaspinBox->setSingleStep(10);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, KwotaspinBox);

        ZaleglespinBox = new QSpinBox(formLayoutWidget_5);
        ZaleglespinBox->setObjectName(QString::fromUtf8("ZaleglespinBox"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, ZaleglespinBox);

        groupBox = new QGroupBox(MieszkaniegroupBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 410, 251, 121));
        formLayoutWidget_6 = new QWidget(groupBox);
        formLayoutWidget_6->setObjectName(QString::fromUtf8("formLayoutWidget_6"));
        formLayoutWidget_6->setGeometry(QRect(10, 20, 221, 80));
        formLayout_6 = new QFormLayout(formLayoutWidget_6);
        formLayout_6->setSpacing(6);
        formLayout_6->setContentsMargins(11, 11, 11, 11);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(formLayoutWidget_6);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_26);

        label_27 = new QLabel(formLayoutWidget_6);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_27);

        ScianyspinBox = new QSpinBox(formLayoutWidget_6);
        ScianyspinBox->setObjectName(QString::fromUtf8("ScianyspinBox"));
        ScianyspinBox->setMaximum(10);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, ScianyspinBox);

        RuryspinBox = new QSpinBox(formLayoutWidget_6);
        RuryspinBox->setObjectName(QString::fromUtf8("RuryspinBox"));
        RuryspinBox->setMaximum(10);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, RuryspinBox);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 99, 521, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PrevLok = new QPushButton(horizontalLayoutWidget);
        PrevLok->setObjectName(QString::fromUtf8("PrevLok"));

        horizontalLayout->addWidget(PrevLok);

        NrObiektu = new QLabel(horizontalLayoutWidget);
        NrObiektu->setObjectName(QString::fromUtf8("NrObiektu"));
        NrObiektu->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(NrObiektu);

        NextLok = new QPushButton(horizontalLayoutWidget);
        NextLok->setObjectName(QString::fromUtf8("NextLok"));

        horizontalLayout->addWidget(NextLok);

        UsunButton = new QPushButton(horizontalLayoutWidget);
        UsunButton->setObjectName(QString::fromUtf8("UsunButton"));

        horizontalLayout->addWidget(UsunButton);

        LokalgroupBox = new QGroupBox(centralWidget);
        LokalgroupBox->setObjectName(QString::fromUtf8("LokalgroupBox"));
        LokalgroupBox->setGeometry(QRect(10, 170, 261, 201));
        layoutWidget = new QWidget(LokalgroupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 18, 221, 163));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        AdreslineEdit = new QLineEdit(layoutWidget);
        AdreslineEdit->setObjectName(QString::fromUtf8("AdreslineEdit"));

        horizontalLayout_2->addWidget(AdreslineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        TelefoncheckBox = new QCheckBox(layoutWidget);
        TelefoncheckBox->setObjectName(QString::fromUtf8("TelefoncheckBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, TelefoncheckBox);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        TvcheckBox = new QCheckBox(layoutWidget);
        TvcheckBox->setObjectName(QString::fromUtf8("TvcheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, TvcheckBox);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        PomieszczeniaspinBox = new QSpinBox(layoutWidget);
        PomieszczeniaspinBox->setObjectName(QString::fromUtf8("PomieszczeniaspinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, PomieszczeniaspinBox);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        MonitoringcheckBox = new QCheckBox(layoutWidget);
        MonitoringcheckBox->setObjectName(QString::fromUtf8("MonitoringcheckBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, MonitoringcheckBox);


        verticalLayout_2->addLayout(formLayout);

        LokUzgroupBox = new QGroupBox(centralWidget);
        LokUzgroupBox->setObjectName(QString::fromUtf8("LokUzgroupBox"));
        LokUzgroupBox->setGeometry(QRect(10, 380, 261, 171));
        layoutWidget_2 = new QWidget(LokUzgroupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 27, 221, 131));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_4->addWidget(label_9);

        RodzajlineEdit = new QLineEdit(layoutWidget_2);
        RodzajlineEdit->setObjectName(QString::fromUtf8("RodzajlineEdit"));

        horizontalLayout_4->addWidget(RodzajlineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        NazwalineEdit = new QLineEdit(layoutWidget_2);
        NazwalineEdit->setObjectName(QString::fromUtf8("NazwalineEdit"));

        horizontalLayout_3->addWidget(NazwalineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        ParkingspinBox = new QSpinBox(layoutWidget_2);
        ParkingspinBox->setObjectName(QString::fromUtf8("ParkingspinBox"));
        ParkingspinBox->setMaximum(999);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, ParkingspinBox);

        PracownicyspinBox = new QSpinBox(layoutWidget_2);
        PracownicyspinBox->setObjectName(QString::fromUtf8("PracownicyspinBox"));
        PracownicyspinBox->setMaximum(999);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, PracownicyspinBox);


        verticalLayout->addLayout(formLayout_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 521, 41));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(560, 150, 301, 301));
        SciezkagroupBox = new QGroupBox(centralWidget);
        SciezkagroupBox->setObjectName(QString::fromUtf8("SciezkagroupBox"));
        SciezkagroupBox->setGeometry(QRect(560, 460, 291, 111));
        verticalLayoutWidget = new QWidget(SciezkagroupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 261, 81));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        sciezka = new QLabel(verticalLayoutWidget);
        sciezka->setObjectName(QString::fromUtf8("sciezka"));

        verticalLayout_4->addWidget(sciezka);

        Obrazbutton = new QPushButton(verticalLayoutWidget);
        Obrazbutton->setObjectName(QString::fromUtf8("Obrazbutton"));

        verticalLayout_4->addWidget(Obrazbutton);

        LoadImageLabel = new QLabel(verticalLayoutWidget);
        LoadImageLabel->setObjectName(QString::fromUtf8("LoadImageLabel"));

        verticalLayout_4->addWidget(LoadImageLabel);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(567, 59, 171, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        LICZBA = new QLabel(horizontalLayoutWidget_3);
        LICZBA->setObjectName(QString::fromUtf8("LICZBA"));

        horizontalLayout_5->addWidget(LICZBA);

        ZapiszAktualnybutton = new QPushButton(centralWidget);
        ZapiszAktualnybutton->setObjectName(QString::fromUtf8("ZapiszAktualnybutton"));
        ZapiszAktualnybutton->setGeometry(QRect(572, 97, 131, 31));
        KlasaLabel = new QLabel(centralWidget);
        KlasaLabel->setObjectName(QString::fromUtf8("KlasaLabel"));
        KlasaLabel->setGeometry(QRect(14, 145, 251, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        KlasaLabel->setFont(font1);
        KlasaLabel->setAlignment(Qt::AlignCenter);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 130, 851, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 40, 851, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        FileSave = new QPushButton(centralWidget);
        FileSave->setObjectName(QString::fromUtf8("FileSave"));
        FileSave->setGeometry(QRect(572, 580, 111, 31));
        FileRead = new QPushButton(centralWidget);
        FileRead->setObjectName(QString::fromUtf8("FileRead"));
        FileRead->setGeometry(QRect(700, 580, 101, 31));
        BackButton = new QPushButton(centralWidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        BackButton->setGeometry(QRect(720, 97, 141, 31));
        Projekt3->setCentralWidget(centralWidget);

        retranslateUi(Projekt3);
        QObject::connect(AddLokalUz, SIGNAL(clicked()), Projekt3, SLOT(dodLokUz()));
        QObject::connect(AddSklep, SIGNAL(clicked()), Projekt3, SLOT(dodSklep()));
        QObject::connect(AddMiesz, SIGNAL(clicked()), Projekt3, SLOT(dodMiesz()));
        QObject::connect(PrevLok, SIGNAL(clicked()), Projekt3, SLOT(poprzedni()));
        QObject::connect(NextLok, SIGNAL(clicked()), Projekt3, SLOT(nastepny()));
        QObject::connect(UsunButton, SIGNAL(clicked()), Projekt3, SLOT(usun()));
        QObject::connect(Obrazbutton, SIGNAL(clicked()), Projekt3, SLOT(zmianaObrazu()));
        QObject::connect(ZapiszAktualnybutton, SIGNAL(clicked()), Projekt3, SLOT(zapiszZmiany()));
        QObject::connect(UsMieszButton, SIGNAL(clicked()), Projekt3, SLOT(usunMieszkanca()));
        QObject::connect(dodMieszkButton, SIGNAL(clicked()), Projekt3, SLOT(dodajMieszkanca()));
        QObject::connect(MieszkaniecsavepushButton, SIGNAL(clicked()), Projekt3, SLOT(zapiszMieszkanca()));
        QObject::connect(PrevMiesz, SIGNAL(clicked()), Projekt3, SLOT(prevMieszkaniec()));
        QObject::connect(nextMiesz, SIGNAL(clicked()), Projekt3, SLOT(nextMieszkaniec()));
        QObject::connect(FileRead, SIGNAL(clicked()), Projekt3, SLOT(odczytZPliku()));
        QObject::connect(FileSave, SIGNAL(clicked()), Projekt3, SLOT(zapiszDoPliku()));
        QObject::connect(BackButton, SIGNAL(clicked()), Projekt3, SLOT(cofnij()));

        QMetaObject::connectSlotsByName(Projekt3);
    } // setupUi

    void retranslateUi(QMainWindow *Projekt3)
    {
        Projekt3->setWindowTitle(QApplication::translate("Projekt3", "Projekt3", nullptr));
        SklepgroupBox->setTitle(QApplication::translate("Projekt3", "Sklep", nullptr));
        label_12->setText(QApplication::translate("Projekt3", "Liczba kas", nullptr));
        label_14->setText(QApplication::translate("Projekt3", "Bramki antykradzie\305\274owe", nullptr));
        label_13->setText(QApplication::translate("Projekt3", "Liczba rega\305\202\303\263w", nullptr));
        BramkicheckBox->setText(QString());
        AddLokalUz->setText(QApplication::translate("Projekt3", "Dodaj lokal u\305\274ytkowy", nullptr));
        AddSklep->setText(QApplication::translate("Projekt3", "Dodaj sklep", nullptr));
        AddMiesz->setText(QApplication::translate("Projekt3", "Dodaj mieszkanie", nullptr));
        MieszkaniegroupBox->setTitle(QApplication::translate("Projekt3", "Mieszkanie", nullptr));
        MieszkancygroupBox->setTitle(QApplication::translate("Projekt3", "Mieszka\305\204cy", nullptr));
        label_21->setText(QApplication::translate("Projekt3", "Liczba mieszka\305\204c\303\263w:", nullptr));
        LiczbaMieszkancowLabel->setText(QApplication::translate("Projekt3", "liczba", nullptr));
        PrevMiesz->setText(QApplication::translate("Projekt3", "Poprzedni", nullptr));
        NrMieszkanca->setText(QApplication::translate("Projekt3", "numer", nullptr));
        nextMiesz->setText(QApplication::translate("Projekt3", "Nast\304\231pny", nullptr));
        label_17->setText(QApplication::translate("Projekt3", "Imi\304\231", nullptr));
        label_18->setText(QApplication::translate("Projekt3", "Nazwisko", nullptr));
        label_19->setText(QApplication::translate("Projekt3", "Wiek", nullptr));
        MieszkaniecsavepushButton->setText(QApplication::translate("Projekt3", "Zapisz", nullptr));
        dodMieszkButton->setText(QApplication::translate("Projekt3", "Dodaj", nullptr));
        UsMieszButton->setText(QApplication::translate("Projekt3", "Usu\305\204", nullptr));
        label_20->setText(QApplication::translate("Projekt3", "Numer", nullptr));
        label_22->setText(QApplication::translate("Projekt3", "Powierzchnia", nullptr));
        OplatygroupBox->setTitle(QApplication::translate("Projekt3", "Op\305\202aty", nullptr));
        label_24->setText(QApplication::translate("Projekt3", "Kwota", nullptr));
        label_25->setText(QApplication::translate("Projekt3", "Ilo\305\233\304\207 zaleg\305\202ych", nullptr));
        groupBox->setTitle(QApplication::translate("Projekt3", "Pomieszczenia", nullptr));
        label_26->setText(QApplication::translate("Projekt3", "Stan \305\233cian", nullptr));
        label_27->setText(QApplication::translate("Projekt3", "Stan rur", nullptr));
        PrevLok->setText(QApplication::translate("Projekt3", "Poprzedni", nullptr));
        NrObiektu->setText(QApplication::translate("Projekt3", "numer", nullptr));
        NextLok->setText(QApplication::translate("Projekt3", "Nast\304\231pny", nullptr));
        UsunButton->setText(QApplication::translate("Projekt3", "Usu\305\204 obiekt", nullptr));
        LokalgroupBox->setTitle(QApplication::translate("Projekt3", "Lokal", nullptr));
        label_3->setText(QApplication::translate("Projekt3", "Adres", nullptr));
        label_4->setText(QApplication::translate("Projekt3", "Gniazdo telefoniczne", nullptr));
        TelefoncheckBox->setText(QString());
        label_5->setText(QApplication::translate("Projekt3", "Gniazdo telewizyjne", nullptr));
        TvcheckBox->setText(QString());
        label_6->setText(QApplication::translate("Projekt3", "Liczba pomieszcze\305\204", nullptr));
        label_7->setText(QApplication::translate("Projekt3", "System monitoringu", nullptr));
        MonitoringcheckBox->setText(QString());
        LokUzgroupBox->setTitle(QApplication::translate("Projekt3", "Lokal U\305\274ytkowy", nullptr));
        label_9->setText(QApplication::translate("Projekt3", "Rodzaj dzia\305\202alno\305\233ci", nullptr));
        label_8->setText(QApplication::translate("Projekt3", "Nazwa firmy", nullptr));
        label_10->setText(QApplication::translate("Projekt3", "Liczba miejsc parkingowych", nullptr));
        label_11->setText(QApplication::translate("Projekt3", "Liczba pracownik\303\263w", nullptr));
        label->setText(QApplication::translate("Projekt3", "Projekt 3", nullptr));
        SciezkagroupBox->setTitle(QApplication::translate("Projekt3", "\305\232cie\305\274ka obrazu:", nullptr));
        sciezka->setText(QApplication::translate("Projekt3", "null", nullptr));
        Obrazbutton->setText(QApplication::translate("Projekt3", "Zmie\305\204 obraz...", nullptr));
        LoadImageLabel->setText(QString());
        label_2->setText(QApplication::translate("Projekt3", "Liczba obiekt\303\263w:", nullptr));
        LICZBA->setText(QApplication::translate("Projekt3", "numer", nullptr));
        ZapiszAktualnybutton->setText(QApplication::translate("Projekt3", "Zapisz zmiany", nullptr));
        KlasaLabel->setText(QString());
        FileSave->setText(QApplication::translate("Projekt3", "Zapis do pliku", nullptr));
        FileRead->setText(QApplication::translate("Projekt3", "Odczyt z pliku", nullptr));
        BackButton->setText(QApplication::translate("Projekt3", "Cofnij zmiany", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Projekt3: public Ui_Projekt3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJEKT3_H
