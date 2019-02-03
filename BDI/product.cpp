/* BetterDiscord Installer
 *
 * Copyright (c) 2019-present Jiiks - https://github.com/Jiiks
 * All rights reserved.
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "product.h"

Product::Product(QWidget *parent) : QWidget(parent) {
	_ui.setupUi(this);
}

void Product::setText(const QString &text) const {
	_ui.lblInfo->setText(text);
}

void Product::setInstallBtnState(const bool enabled, const QString &text) const {
	_ui.btnInstall->setEnabled(enabled);
	_ui.btnInstall->setText(text);
}

void Product::setSkipBtnState(const bool enabled, const QString &text) const {
	_ui.btnSkip->setEnabled(enabled);
	_ui.btnSkip->setText(text);
}

void Product::setUninstallBtnState(const bool enabled, const QString &text) const {
	_ui.btnUninstall->setEnabled(enabled);
	_ui.btnUninstall->setText(text);
}

void Product::setCheckedBtn(const int index) const {
	_ui.btnInstall->setChecked(false);
	_ui.btnSkip->setChecked(false);
	_ui.btnUninstall->setChecked(false);
	switch(index) {
	case 0:
		_ui.btnInstall->setChecked(true);
		break;
	case 1:
		_ui.btnSkip->setChecked(true);
		break;
	case 2:
		_ui.btnUninstall->setChecked(true);
		break;
	default: 
		_ui.btnSkip->setChecked(true);
	}
}
